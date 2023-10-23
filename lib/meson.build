cpp = meson.get_compiler('cpp')

if host_machine.system() == 'windows'
    d3d = cpp.find_library('d3dcompiler')
    ws2 = cpp.find_library('ws2_32')
    userenv = cpp.find_library('userenv')
    bcrypt = cpp.find_library('bcrypt')
    ntdll = cpp.find_library('ntdll')
    sys_deps = [d3d, ws2, userenv, bcrypt, ntdll]
else
    sys_deps = []
endif

# glfw_dep = dependency('glfw3', default_options: ['default_library=static'], static: true)
glfw_dep = dependency('glfw3')
# hl_inc = include_directories('../subprojects/hashlink/src')
hl_dep = subproject('hashlink').get_variable('hl_dep')
wgpu_proj = subproject('wgpu-native')
wgpu_dep = wgpu_proj.get_variable('dep_wgpu_native')
wgpu_inc = include_directories('../subprojects/wgpu-native/ffi')

inc_dir = include_directories('../include')
lib_src = ['hlwgpu.cpp']
libhlwgpu = shared_library('hlwgpu',
        sources: lib_src,
        dependencies: [glfw_dep, wgpu_dep, sys_deps, hl_dep],
        # include_directories: [hl_inc, inc_dir, wgpu_inc])
        include_directories: [inc_dir, wgpu_inc])
libhlwgpu_dep = declare_dependency(
    include_directories: inc_dir,
    link_with: libhlwgpu,
)
