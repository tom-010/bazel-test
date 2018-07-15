cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cc"],
    deps = [
        ":hello-greet",
        "//lib:hello-opencv",
        "//lib:hello-pcl",
        "//lib:hello-time",
        "@opencv//:opencv",
        "@pcl//:pcl",
    ],
)
