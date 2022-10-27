int square::GetPerimeter(){
        return (4*sl)
}
double square::GetArea(){
        return(sl*sl)
}
void square::void Draw(int canvas_width, int canvas_height) {
        return ({
                        canvas_width = sx;
                        canvas_height = sl;

                        for (int i =1;i<= sx; i++;){
                                for (int j = 1; j <= sl; j++)
                                cout <<"*"<<endl;
                        }
                });
int rectangle::GetArea(){
        return abs(this->rx -this->rx) * abs(this->ry - this->ry);
}
int rectangle::GetPerimeter(){
        return(abs((this->rx -this->rx) * abs(this->ry - this->ry))*2;
}
void rectangle::void Draw(int canvas_width, int canvas_height) {
        return ({
                        canvas_width = w;
                        canvas_height = h;

                        for (int i =1;i<=w; i++;){
                                for (int j = 1; j <= h; j++)
                                cout <<"+"<<endl;
                        }
                });

