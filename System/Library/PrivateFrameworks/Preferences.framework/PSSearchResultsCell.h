/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	BOOL _shouldIndentContent;
	BOOL _shouldIndentSeparator;

}

@property (assign,nonatomic) BOOL shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setShouldIndentSeparator:(BOOL)arg1 ;
-(void)setShouldIndentContent:(BOOL)arg1 ;
-(void)_resetIndentation;
-(BOOL)shouldIndentContent;
-(BOOL)shouldIndentSeparator;
@end

