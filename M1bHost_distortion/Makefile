CC = g++
AR = ar
LD = ld
OPENCV_CFLAGS = `pkg-config --cflags opencv`
CFLAGS = -c -Wall -I include/ $(OPENCV_CFLAGS)
LDFLAGS = `pkg-config --libs opencv` -lm

CFLAGS += -I ../Framework/libPlatformSpecifics/include
CFLAGS += -I ../Framework/libVideoInput/include
CFLAGS += -I ../Framework/libCommunication/include
CFLAGS += -I ../Framework/libMiscTimeAndConfigAndroid/include
CFLAGS += -I ../Framework/libCameraAbstraction/include
CFLAGS += -I ../Framework/libLogConfigTime/include
CFLAGS += -I ../Framework/libMiscTimeAndConfig/include

CFLAGS += -I ../ImageProcessing/libImageFilter/include
CFLAGS += -I ../ImageProcessing/libTwoColorCircleMarker/include
CFLAGS += -I ../ImageProcessing/libTimeSyncBeacon/include

CFLAGS += -I ../Tracking/lib3dWorld/include

LIBS += ../Tracking/lib3dWorld/lib3dWorld.a
LIBS += ../ImageProcessing/libTwoColorCircleMarker/libTwoColorCircleMarker.a
LIBS += ../ImageProcessing/libTimeSyncBeacon/libTimeSyncBeacon.a
LIBS += ../Framework/libPlatformSpecifics/libPlatformSpecifics.a
LIBS += ../Framework/libVideoInput/libVideoInput.a
LIBS += ../Framework/libCommunication/libCommunication.a
LIBS += ../Framework/libCameraAbstraction/libCameraAbstraction.a
LIBS += ../Framework/libLogConfigTime/libLogConfigTime.a


all: M1bHost_distortion


M1BHOST_DISTORTION_OBJECTS = src/main.o


M1bHost_distortion: $(M1BHOST_DISTORTION_OBJECTS)
	$(CC) -o M1bHost_distortion $(M1BHOST_DISTORTION_OBJECTS) $(LIBS) $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	
.c.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -rf src/*.o M1bHost_distortion
	
.PHONY: all clean
