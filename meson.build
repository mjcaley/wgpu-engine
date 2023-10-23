project('hlwgpu', 'cpp', default_options : ['c_std=c17', 'cpp_std=c++17'])

subdir('lib')
subdir('src')

# cpp = meson.get_compiler('cpp')

# d3d = cpp.find_library('d3dcompiler')
# ws2 = cpp.find_library('ws2_32')
# userenv = cpp.find_library('userenv')
# bcrypt = cpp.find_library('bcrypt')
# ntdll = cpp.find_library('ntdll')
# sys_deps = [d3d, ws2, userenv, bcrypt, ntdll]

# glfw_dep = dependency('glfw3', default_options: ['default_library=static'], static: true)
# hl_inc = include_directories('subprojects/hashlink/src')
# wgpu_proj = subproject('wgpu-native')
# wgpu_dep = wgpu_proj.get_variable('dep_wgpu_native')
# wgpu_inc = wgpu_proj.get_variable('inc_dirs')

# inc_dir = include_directories('src')
# lib_src = ['src/hlwgpu.cpp']
# libhlwgpu = shared_library('libhlwgpu',
#         sources: lib_src,
#         dependencies: [glfw_dep, wgpu_dep, sys_deps],
#         include_directories: [hl_inc, inc_dir, wgpu_inc])
# libhlwgpu_dep = declare_dependency(
#     include_directories: inc_dir,
#     link_with: libhlwgpu,
# )

# executable(
#         'hlwgpu',
#         sources: exec_src,
#         include_directories: inc_dir,
#         # dependencies: [glfw_dep, wgpu_dep, sys_deps, libhlwgpu_dep])
#         # dependencies: [glfw_dep, wgpu_dep, sys_deps],
#         dependencies: libhlwgpu_dep,
#         # link_with: libhlwgpu,
#         override_options: ['default_library=shared'])



# GLFW works
# Manually copy the DLL to the build directory


# wgpu_inc =  join_paths('subprojects', 'wgpu-native', 'ffi')
# run_command('cargo', check: true)
# wgpu_dir = meson.current_source_dir() + '/subprojects/wgpu-native/target/release'
# wgpu_dep = cpp.find_library('wgpu_native', dirs: wgpu_dir)

# inc_dir = include_directories('src')
# lib_src = ['src/hlwgpu.cpp']
# exec_src = ['src/main.cpp']
# libhlwgpu = library('libhlwgpu',
#         lib_src,
#         dependencies: [glfw_dep, wgpu_dep, sys_deps],
#         include_directories: [hl_inc, inc_dir, wgpu_inc])

# executable(
#         'hlwgpuexe',
#         exec_src,
#         include_directories: [hl_inc, inc_dir, wgpu_inc],
#         dependencies: [glfw_dep, wgpu_dep, sys_deps],
#         link_with: libhlwgpu)
