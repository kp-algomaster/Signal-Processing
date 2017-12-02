    double area_under_curve(int startPoint, int endPoint, double sig_array[]) {
        //using std::abs;
        int n = 10; // no. of trapezoids or rectangles
        int dx = (endPoint - startPoint) / n; //step size
        double area = 0; //our goal to find
        double meanY;

        for (int i = 0; i < n; i++) {
            //using trapezoidal method
            //the area of a trapezoid is (lower base + upper base)*height/2
            //f(a+i*dx): upper base, f(a+(i+1)*dx): lower base
            //dx: height of the trapezoid
            //Integral = Sum((x[i+1] - x[i]) * (y[i] + y[i+1])/2 )
            //meanY = (abs(sig_array[i * dx]) + abs(sig_array[(i + 1) * dx])) / 2;
            meanY = (sig_array[i * dx] + sig_array[(i + 1) * dx]) / 2;
            area = area + meanY * dx;
            // area = area + (f(a+i*dx)+f(a+(i+1)*dx))*dx/2.0;
        }
        return area;
    }
