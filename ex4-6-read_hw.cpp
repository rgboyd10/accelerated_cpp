//read homework grades from an input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw)
{
  if(in)
  {
    //get rid of previous contents
    hw.clear();

    //read homework grades
    double x;
    double final_grade;
    while(in >> x)
      {
      x = 0.2 * midterm + 
      x = final_grade;
      hw.push_back(x);
      }

    //clear the stream so that input will work for the next student
    in.clear();
  }
}
