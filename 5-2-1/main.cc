int main(){
        while(1) {
                void Draw (int canvas_width, int canvas_height){
                        cin>> canvas_width >> canvas_height};
                char a;
                if (a=="rect"){
                        Rectangle rectangle;
                        int b,c,d,e;
                        char f;
                        cin >> b >> c >> d >> e >> f;

                        rectangle.rx = b;
                        rectangle.ry = c;
                        rectabgle.w = d;
                        rectangle.h = e;


                        cout << "Area: " << rectangle.GetArea() << "\n" << "Perimeter: " << rectangle.GetPerimeter << endl;
                        cout << rectangle.Draw << endl;
                }

                else if (a == "square"){
                        Square square;
                        int b,c,d,;
                        char f;
                        cin >> b >> c >> d  >> f;

                        rectangle.sx = b;
                        rectangle.sy = c;
                        rectabgle.sl = d;


                        cout << "Area: " << square.GetArea() << "\n" << "Perimeter: " << square.GetPerimeter << endl;
                        cout << square.Draw << endl;
                }
                else if (a == "quit"){
                        break;
                }
        }
        return 0;
}


