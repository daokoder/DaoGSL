
CC = gcc
CLANGDAO ?= clangdao

INCLUDE = -I. -I/usr/local/dao/include -Iwrap
LIBS = -L. -L/usr/lib
CFLAGS = -c -fPIC -DGSL_DISABLE_DEPRECATED
LFLAGS = -lgsl -lgslcblas

GSL_INC =

TARGET = DaoGSL.so

ifeq ($(debug),yes)
  CFLAGS += -ggdb -DDEBUG
  LFLAGS += -ggdb
else
  CFLAGS += -O2
endif

UNAME = $(shell uname)

ifeq ($(UNAME), Linux)
  CFLAGS += -DUNIX
  LFLAGS += -fPIC -shared -Wl,-soname,libDaoGSL.so
#  GSL_INC += -I/usr/local/include
endif

ifeq ($(UNAME), Darwin)
  TARGET = DaoGSL.dylib
  CFLAGS += -DUNIX -DMAC_OSX
  LFLAGS += -fPIC -dynamiclib -undefined dynamic_lookup -install_name libDaoGSL.dylib
#  LFLAGS += -L/opt/local/lib
#  GSL_INC += -I/opt/local/include
endif

INCLUDE += $(GSL_INC)

OBJECTS = wrap/dao_GSL.o wrap/dao_GSL2.o wrap/dao_GSL3.o

first: all 

all: $(TARGET)

.SUFFIXES: .c .obj .cpp .cc .cxx .C

.c.o:
	$(CC) $(INCLUDE) -c $(CFLAGS) -o $@ $<

$(TARGET): $(OBJECTS)
	$(CC) $(LIBS) $(LFLAGS) -o $@ $(OBJECTS)

bind:
	@test -d wrap || mkdir wrap
	$(CLANGDAO) -DGSL_DISABLE_DEPRECATED $(GSL_INC) gsl.c -o wrap/

clean:
	rm $(OBJECTS)
