cc_library(
    name = "pcl",
    srcs = glob(["lib/x86_64-linux-gnu/*.so"]),
    hdrs = glob(["include/pcl-1.8/pcl/**/*.hpp", "include/pcl-1.8/pcl/**/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
    linkstatic = 1,
)