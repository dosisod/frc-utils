double deadzone(double r, double v) { return (v<r?0:v-r+(v*(v-r))); }