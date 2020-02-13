#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <pthread.h>  
#include <signal.h>  
#include <string.h>  
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <log/log.h>
//#define LOG_TAG “cmdline_test”

#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, "cmdline_test", __VA_ARGS__) 
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG , "cmdline_test", __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO  , "cmdline_test", __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN  , "cmdline_test", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR  , "cmdline_test", __VA_ARGS__)



int main()  
{  
    int fd = open("/proc/cmdline",O_RDONLY);
    if(fd<0){

        LOGD("open proc cmdline fail\n");
    }
    else{

        LOGD("open the /proc/cmdline success!!!\n");
    
    }
    char buf[2048] ;
    int size = 0;
    size = read(fd,buf,2048);
    
    if(size == 0){
        LOGD("read cmdline fail\n");
    }
    else{
        puts(buf);
        LOGD("is cmdlime value is  %s\n",buf);
    }

    close(fd);
    return 0;
}
