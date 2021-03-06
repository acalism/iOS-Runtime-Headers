/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMutableArray, NSString, UITableViewCell, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <ABPeoplePickerNavigationControllerDelegate, HKMedicalIDEditorCellEditDelegate, _EmergencyContactRelationshipPickerDelegate> {
    void *_addressBook;
    NSMutableArray *_cells;
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    bool_selectedContactIsBeingAdded;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)_configureAddContactCellLayoutForRowIndex:(long long)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1;
- (void)_didSelectPerson:(void*)arg1 identifier:(int)arg2;
- (void)_presentEmergencyContactPicker;
- (bool)canEditRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)dealloc;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (long long)numberOfRows;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;

@end
