# EBSystemStorage
Easy way to save small pieces of code in your application! 

#Save Data
```
let system = EBSystemStorage()
system.accessKey = "UseThisKeyToAccessThisObject"
let name = "Fido"
system.saveObject(name)
system.requestAccess()
```

#Fetch Data
```
let system = EBSystemStorage()
system.accessKey = "UseThisKeyToAccessThisObject"
system.requestAccess()
```

#More Information
- You can create as many instances of EBSystemStorage as you want! This will help you save more data.
