Pod::Spec.new do |s|
  s.name         = "libds"
  s.version      = "1.0.0"
  s.summary      = "Data Structures in C"
  s.homepage     = "https://github.com/zhemao/libds"
  s.license      = 'MIT'
  s.author       = "zhemao"
  s.source       = { :git => "https://github.com/wentingliu/libds.git"}
  s.source_files = 'ds.h', 'hashmap.{h,c}', 'heap.{h,c}', 'list.{h,c}', 'strutils.{h,c}', 'vector.{h,c}'
  s.requires_arc = true
end