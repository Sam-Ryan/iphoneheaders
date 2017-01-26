/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryExportedInterface
@required
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
-(void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
-(void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(BOOL)arg2;
-(void)passAdded:(id)arg1;
-(void)passUpdated:(id)arg1;
-(void)passRemoved:(id)arg1;

@end

