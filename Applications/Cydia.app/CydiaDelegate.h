/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CydiaDelegate
@required
-(void)releaseNetworkActivityIndicator;
-(void)retainNetworkActivityIndicator;
-(void)reloadDataWithInvocation:(id)arg1;
-(char)addTrivialSource:(id)arg1;
-(void)installPackages:(id)arg1;
-(void)_saveConfig;
-(void)returnToCydia;
-(id)addProgressHUD;
-(void)installPackage:(id)arg1;
-(void)clearPackage:(id)arg1;
-(void)removePackage:(id)arg1;
-(void)showActionSheet:(id)arg1 fromItem:(id)arg2;
-(void)removeProgressHUD:(id)arg1;
-(void)updateData;
-(void)distUpgrade;
-(void)beginUpdate;
-(void)addSource:(id)arg1;
-(BOOL)requestUpdate;
-(void)saveState;
-(void)syncData;
-(void)loadData;
-(char)updating;

@end

