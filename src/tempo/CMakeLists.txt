add_library (tempo
    frame_timer.cpp
    metronome.cpp
)
target_include_directories (tempo PUBLIC include)