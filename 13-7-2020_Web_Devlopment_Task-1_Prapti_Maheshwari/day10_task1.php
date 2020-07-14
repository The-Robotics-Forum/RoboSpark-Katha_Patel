<!-- Day10_task1
php file for displaying the data -->
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <title>student information</title>
         <link rel="stylesheet" href="style.css"> 

        <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<div class="display">
<table width='600' id="sig" cellspacing='0' cellpadding='0' border-spacing='0' style="margin:0;padding:0;">
        <tr>
            <th >Student-ID</th>
            <th>Student-Name</th>
            <th>Branch</th>
            <th>CGPA</th>
</tr>
<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $userid=$_POST['id'];
   
    $query=mysqli_query($con,"SELECT * FROM `student`WHERE `stud_id`='$userid'  ");
    
        if(mysqli_num_rows($query)==0)
{
  echo "<h1>Sorry! This Student Id does not exist.Try again</h1>";
}
else{
    while($row=mysqli_fetch_assoc($query))
    {
      echo "<tr>";
      echo "<td>"; echo $row['stud_id']; echo "</td>";
      echo "<td>"; echo $row['stud_name']; echo "</td>";
      echo "<td>"; echo $row['branch']; echo "</td>";
      echo "<td>"; echo $row['cgpa']; echo "</td>";
      echo "</tr>";
    }
  echo "</table>";
}
  
}
?>
</table>
</div>

</body>
</html>



 