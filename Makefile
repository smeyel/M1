all: Framework ImageProcessing M1Host M1bHost_distortion Tracking

Framework:
	make -C Framework/

ImageProcessing:
	make -C ImageProcessing/

M1Host: Tracking ImageProcessing Framework
	make -C M1Host/

M1bHost_distortion: Tracking ImageProcessing Framework
	make -C M1bHost_distortion/

Tracking:
	make -C Tracking/

clean:
	make -C Framework/ clean
	make -C ImageProcessing/ clean
	make -C M1Host/ clean
	make -C M1bHost_distortion/ clean
	make -C Tracking/ clean

.PHONY: all Framework ImageProcessing M1Host M1bHost_distortion Tracking clean
