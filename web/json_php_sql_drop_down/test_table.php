<?php
  $conn = new mysqli("localhost", "root", "", "test"); //need to adjust with your environment
	global $conn;
	$sql = mysqli_query($conn,"SELECT * FROM `madrash_table` WHERE 1");
	$sql_dat = array();
	$sql_class=array();
	while($row = $sql->fetch_assoc()){
	  $sql_dat[$row['class_name']][] = ["id"=>$row['id'], "student_name"=>$row['student_name'], "student_info"=>json_decode($row['student_info']), "add_date"=>$row['add_date']];
	  $sql_class[$row['class_name']][] = 'class';
	}
?>
<!DOCTYPE html>
<html>
<head>
<script>
function drop_down() {
  var sql_dat = <?=json_encode($sql_dat);?>;
  var t = document.getElementById("class_name").value;
  let new_dat = sql_dat[t];
  let text = '';
  for (let i=0; i<new_dat.length; i++) {
    text = text + "<option value=\"" + new_dat[i]["id"] + "\">" + new_dat[i]["student_name"] + "</option>";
  }
  document.getElementById("student_name").innerHTML = text;
}
</script>
</head>
<body>
<select id = "class_name" onchange="drop_down()">
<?php
  foreach($sql_class as $e=>$v) {
    echo '<option value="'.$e.'">'.$e.'</option>';
  }
?>
</select>
<select id = "student_name"></select>
</body>
</html>
