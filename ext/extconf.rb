require 'mkmf'

if find_executable('pkg-config')
  $CFLAGS << ' ' + `pkg-config libavfilter --cflags`.strip
  $CFLAGS << ' ' + `pkg-config libavcodec --cflags`.strip
  $CFLAGS << ' ' + `pkg-config libavutil --cflags`.strip
  $CFLAGS << ' ' + `pkg-config libswscale --cflags`.strip
  $CFLAGS << ' ' + `pkg-config libswresample --cflags`.strip
  $LDFLAGS << ' ' + `pkg-config libavfilter --libs`.strip
  $LDFLAGS << ' ' + `pkg-config libavcodec --libs`.strip
  $LDFLAGS << ' ' + `pkg-config libavutil --libs`.strip
  $LDFLAGS << ' ' + `pkg-config libswscale --libs`.strip
  $LDFLAGS << ' ' + `pkg-config libswresample --libs`.strip
end

$CFLAGS << " -W -Wall"

if have_library("avformat") and find_header('libavformat/avformat.h') and
   have_library("avcodec")  and find_header('libavutil/avutil.h') and
   have_library("avutil")   and find_header('libavcodec/avcodec.h') and
   have_library("swresample")   and find_header('libswresample/swresample.h') and
   have_library("swscale")  and find_header('libswscale/swscale.h') then


else
  STDERR.puts "no library"
  exit 1
end
