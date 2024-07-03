//   const int numRolls = 150;
//   int diceRolls[numRolls];

//   // Seed the random number generator with the current time
//   //std::srand(static_cast<unsigned>(std::time(nullptr)));

//   // Simulate rolling the dice 150 times
//   for (int i = 0; i < numRolls; ++i) {
//       // Generate a random number between 1 and 6 (inclusive) to represent the dice face
//       int faceValue = rand() % 6 + 1;
//       diceRolls[i] = faceValue;
//       cout << "Roll " << i + 1 << ": " << faceValue << endl;
//   }

//   // Display the count of each face
//   cout << "\nFace Counts:\n";
//   for (int face = 1; face <= 6; ++face) {
//       int count = 0;
//       for (int i = 0; i < numRolls; ++i) {
//           if (diceRolls[i] == face) {
//               ++count;
//           }
//       }
//       cout << "Face " << face << ": " << count << " times\n";
//   }