local sqlite_dir = "../sqlite3"
local json_dir   = "../json-develop/include"

if os.get()=="windows" then
	include(sqlite_dir)
end

project("ygopen")
	kind("StaticLib")
	flags("ExtraWarnings")
	files({"**.hpp", "**.cpp"})
	links("sqlite3")

	configuration("windows")
		includedirs({sqlite_dir, json_dir})
		defines({ "WIN32", "_WIN32", "NOMINMAX" })

	configuration("not windows")
		buildoptions({"-pedantic", "--std=c++11"})
		links("dl")

	configuration("macosx")
		includedirs(json_dir)
