BUILD_DIR="build"

configure:
	git clone https://github.com/google/googletest && \
	git clone https://github.com/nlohmann/json

init:
	rm -rf ${BUILD_DIR} && \
	mkdir ${BUILD_DIR} && \
	cd ${BUILD_DIR} && \
	cmake ..

build:
	cd ${BUILD_DIR} && \
	make

test: 
	./${BUILD_DIR}/test/IntercomTests

run:
	./${BUILD_DIR}/Main

.PHONY: configure init build test run
