/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* _optionArray;

}
+(id)subcommandWithName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)stop;
-(int)run;
-(id)initWithName:(id)arg1 ;
-(void)showHelp;
-(void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(id)optionArray;
-(id)subcommandName;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(void)addOptions;
-(void)stopDueToSigTerm;
@end
