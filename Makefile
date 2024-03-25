CC = gcc
RAYFLAGS = -D_GNU_SOURCE -DGL_SILENCE_DEPRECATION=199309L -I ./raylib/src

CFLAGS = -lm -Wall -Wextra
# TODO: winresource
WINFLAGS = lib/libraylib.a -lwinmm -lgdi32 -lopengl32 -I ./raylib/src/external/deps/mingw
RELEASE_FLAGS = --static -Ofast -w -s

ifeq ($(OS),Windows_NT)
	MOVE := move
	CFLAGS += $(WINFLAGS)
else
	MOVE := mv
endif

debug:
	$(CC) ./src/main.c -o ./bin/voxelator.exe -DDEBUG $(CFLAGS) $(RAYFLAGS)

release:
	$(CC) ./src/main.c -o ./bin/voxelator.exe -DRELEASE $(CFLAGS) $(RAYFLAGS) $(RELEASE_FLAGS)  -Wl,-subsystem,windows

run:
	./bin/voxelator

init:
	make -C ./raylib/src
	$(MOVE) ./raylib/src/libraylib.a ./lib/
