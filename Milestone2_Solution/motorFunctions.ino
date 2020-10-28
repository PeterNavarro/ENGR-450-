//  Never change these functions
//  If they have the reversed outcome rewire the platform
//  Do not re-write these functions
void platformForward()
{
  leftForward();
  rightForward();
}
void platformBackward()
{
  leftBackward();
  rightBackward();
}
void platformStop()
{
  leftStop();
  rightStop();
}
void platformSpinLeft()
{
  leftBackward();
  rightForward();
}
void platformSpinRight()
{
  rightBackward();
  leftForward();
}
//left
void leftForward()
{
  digitalWrite(leftA, HIGH);
  digitalWrite(leftB, LOW);
}
void leftBackward()
{
  digitalWrite(leftA, LOW);
  digitalWrite(leftB, HIGH);
}

void leftStop()
{
  digitalWrite(leftA, LOW);
  digitalWrite(leftB, LOW);
}
//right
void rightForward()
{
  digitalWrite(rightA, HIGH);
  digitalWrite(rightB, LOW);
}
void rightBackward()
{
  digitalWrite(rightA, LOW);
  digitalWrite(rightB, HIGH);
}

void rightStop()
{
  digitalWrite(rightA, LOW);
  digitalWrite(rightB, LOW);
}
