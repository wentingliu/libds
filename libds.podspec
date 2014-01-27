Pod::Spec.new do |s|
  s.name         = "libds"
  s.version      = "1.0.0"
  s.summary      = "Data Structures in C"
  s.homepage     = "https://github.com/zhemao/libds"
  s.license      = 'MIT'
  s.author       = "zhemao"
  s.source       = { :git => "https://github.com/zhemao/libds.git"}
  s.source_files = '**/*.{h,c}'
  s.requires_arc = true
end