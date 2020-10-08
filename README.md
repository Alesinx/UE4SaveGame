# UE4SaveGame

Disclaimer: This code is not my own. I just took the classes Slayemin posted in the button of [1] and put a project together to provide an examne of game saving through the SaveGame flag method

To save properties you just need to make a new Actor that inherits from 'SaveableObject' and enable the 'SaveGame' flag. You can do that either from c++ (UPROPERTY(SaveGame)) or from blueprint (check SaveGame on the details of a variable)
For a further explanation on how this worth go to [1]
Also see: [2]

[1] https://forums.unrealengine.com/development-discussion/c-gameplay-programming/88477-spawning-actors-from-serialized-data?116235-Spawning-Actors-from-Serialized-Data=&viewfull=1#post787282
[2] https://answers.unrealengine.com/questions/35618/savingloading-an-array-of-objects.html?sort=votes