<!-- Modal -->
<div class="modal" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h4 class="modal-title" id="myModalLabel" ng-bind="formTitle"></h4>
      </div>
      <div class="modal-body">
        <form name="myForm" class="" novalidate>
          <div class="form-group" ng-class="{'has-error': myForm.name.$dirty && myForm.name.$invalid}">
            <label for="name">Name</label>
            <input type="text" name="name" id="name" class="form-control" ng-model="formData[0]" required/>
          </div>

          <div class="form-group" ng-class="{'has-error': myForm.phone.$dirty && myForm.phone.$invalid}">
            <label for="phone">Phone</label>
            <input type="text" name="phone" id="phone" class="form-control" ng-model="formData[1]" ng-pattern="'[0-9-()]*'" required/>
          </div>

          <div class="form-group" ng-class="{'has-error': myForm.email.$dirty && (myForm.email.$invalid || myForm.email.$error.email)}">
            <label for="email">Email</label>
            <input type="email" name="email" id="email" class="form-control" ng-model="formData[2]" required/>
          </div>

          <div class="form-group" ng-class="{'has-error': myForm.address.$dirty && myForm.address.$invalid}">
            <label for="address">Address</label>
            <textarea class="form-control" rows="3" id="address" ng-model="formData[3]" name="address"></textarea>
          </div>

          <div class="form-group" ng-class="{'has-error': myForm.birthday.$dirty && myForm.birthday.$invalid}">
            <label for="birthday">Birthday</label>
            <div class="dropdown">
                <a class="dropdown-toggle my-toggle-select" id="dLabel" role="button" data-toggle="dropdown" data-target="#" href="">
                    <div class="input-append">
                      <input type="text" class="input-large form-control" data-ng-model="formData[4] | date:'MMM d, y HH:mm:ss Z'" name="birthday" id="birthday">
                      <span class="add-on"><i class="icon-calendar"></i></span>
                    </div>
                </a>
                <ul class="dropdown-menu" role="menu" aria-labelledby="dLabel">
                    <datetimepicker data-ng-model="formData[4]" data-datetimepicker-config="{ dropdownSelector: '.my-toggle-select' }"></datetimepicker>
                </ul>
            </div>
          </div>
        </form>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary" ng-click="submit()" ng-disabled="myForm.name.$invalid || myForm.phone.$invalid || myForm.email.$invalid || myForm.email.$error.email || myForm.address.$invalid || myForm.birthday.$invalid">Save changes</button>
      </div>
    </div>
  </div>
</div> <!-- Modal -->