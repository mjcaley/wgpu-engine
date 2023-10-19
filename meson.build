project('hlwgpu', 'cpp', default_options : ['c_std=c17', 'cpp_std=c++17'])

glfw_dep = dependency('glfw3')
wgpu_proj = subproject('wgpu-native')
wgpu_dep = wgpu_proj.get_variable('dep_wgpu_native')
hl_inc = include_directories('subprojects/hashlink/src')

library('hlwgpu',
        'src/hlwgpu.hpp', 'src/hlwgpu.cpp',
        dependencies: [glfw_dep, wgpu_dep],
        include_directories: hl_inc)
