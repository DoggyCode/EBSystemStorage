# EBSystemStorage
Easy way to save small pieces of code in your application! 

#Save Data
```
let system = EBSystemStorage()
system.accessKey = "UseThisKeyToAccessThisObject"
let name = "Fido"
system.saveObject(name)
```

#Fetch Data
```
let system = EBSystemStorage()
system.accessKey = "UseThisKeyToAccessThisObject"
system.requestAccess()
```

#Display Data 
```
class ViewController: UIViewController {
    
    @IBOutlet weak var name : UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let system = EBSystemStorage()
        system.accessKey = "UseThisKeyToAccessThisObject"
        system.requestAccess()
        name.text = system.result as? String
    }
}
```

#More Information
- You can create as many instances of EBSystemStorage as you want! This will help you save more data.
