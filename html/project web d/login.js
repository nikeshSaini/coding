function login(){

 var uname=document.getElementById("t1").value;
 var pwd=document.getElementById("t2").value;


 var letters = /^[A-Za-z]+$/;

 if(uname=='')
 {
     alert('Please enter the user name.');
 }
 else if(!letters.test(uname))
 {
     alert('User name field required only alphabet characters');
 }
 else if(pwd=='')
 {
     alert('Please enter Password');
 }
 else if(document.getElementById("t2").value.length < 6)
 {
     alert ('Password minimum length is 6');
 }
 else if(document.getElementById("t2").value.length > 12)
 {
     alert ('Password max length is 12');
 }
 
 else{
    				                            
        alert('Login Successfull ');
        // Redirecting to other page or webste code. 
        window.location.href ="#" 
 }
 



}