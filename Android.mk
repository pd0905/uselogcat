LOCAL_PATH:= $(call my-dir)

# Can Run Program
#======================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := cmdline.c
LOCAL_CFLAGS += -DBUILD_FOR_ANDROID -DIMX6Q -Wno-multichar -Wall -Wextra -Werror -Wno-unused-parameter
LOCAL_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES := \
	libcutils \
	libutils \
	liblog \
	libpng \
	libz \
	libbinder \
	libmedia \
	libstagefright \
	libstagefright_foundation

#LOCAL_C_INCLUDES := \
	frameworks/native/include/media/openmax \
	external/libpng \
	external/zlib \
	external/linux-lib/g2d \
	external/fsl_vpu_omx/OpenMAXIL/src/component/vpu_wrapper \


LOCAL_MODULE := cmdlinetest

#LOCAL_MODULE_TAGS := eng

include $(BUILD_EXECUTABLE)
#Can Run Program
#========================================================
