app.controller("myCtrl", function ($scope, $http) {
  NProgress.start();
  var req = $http.get("file:///home/pvsune/angular-spa/data.json");
  req.success(function (response) {
    console.log(response.cols); // debug
    $scope.data = response;
  });
  req.finally(function () { NProgress.done() });

  $scope.rows = 20;

  $scope.submit = function () {
    // post to server
    alert("Data submitted!");
  }

  $scope.fill = function (data) {
    console.log(data); // debug
    $scope.formTitle = "Edit participant";
    $scope.formData = data;
  }

  $scope.reset = function () { 
    $scope.formTitle = "Add participant";
    $scope.formData = [];
  }
   
  $scope.dt = new Date();
  $scope.open = function (e) {
    e.preventDefault();
    e.stopPropagation();
    $scope.opened = true;
  }
});