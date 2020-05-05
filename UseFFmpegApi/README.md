https://ffmpeg.zeranoe.com/builds/

1. 由于qt是32位的，所以ffmpeg也下载32位的
2. 在.pro中导入库
    ```
    INCLUDEPATH += \
      D:/my-tools/FFmpeg32/dev/include

    LIBS += \
      D:/my-tools/FFmpeg32/dev/lib/libavcodec.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libavdevice.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libavfilter.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libavformat.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libavutil.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libpostproc.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libswresample.dll.a \
      D:/my-tools/FFmpeg32/dev/lib/libswscale.dll.a
    ```

3. 在mainwindow.h中导入头文件
  ```
   extern "C"
   {
      #include <libavcodec/avcodec.h>
      #include <libavformat/avformat.h>
      #include <libswscale/swscale.h>
      #include <libavdevice/avdevice.h>
      #include <libavformat/version.h>
      #include <libavutil/time.h>
      #include <libavutil/mathematics.h>
   }
  ```

4. 如果运行debug异常，就把FFmpeg/shared/* 拷贝到 build-<project>-Desktop_Qt_5_9_9_MinGW_32bit-Debug/debug/ 下面后，再次运行