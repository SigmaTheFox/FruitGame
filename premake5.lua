workspace("FruitGame")
	configurations({ "Debug", "Release" })
	platforms({ "Windows", "Linux" })

project("FruitGame")
	kind("WindowedApp")
	language("C")
	targetdir("build/%{cfg.buildcfg}")

	files({ "src/**.c", "include/**.h" })
	links({ "raylib" })

filter("configurations:Debug")
	defines({ "DEBUG" })
	symbols("On")

filter("configurations:Release")
	defines({ "NDEBUG" })
	optimize("On")
