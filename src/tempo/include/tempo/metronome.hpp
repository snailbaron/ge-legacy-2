#pragma once

namespace ge::tempo {

class Metronome {
public:
    explicit Metronome(int fps = 1);

    void reset(int fps);
    int ticks(double delta);

private:
    double _period;
    double _offset;
};

} // namespace ge::tempo
