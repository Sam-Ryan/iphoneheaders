/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADataElement <NSObject>
@required
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
-(void)setLocalItem:(void*)arg1;
-(BOOL)loadLocalItemWithAccount:(id)arg1;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1;

@end

