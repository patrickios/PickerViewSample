//
//  ViewController.h
//  PickerViewSample
//
//  Created by Patrick on 14-6-10.
//  Copyright (c) 2014年 Patrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPickerViewDelegate,UIPickerViewDataSource>

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;

@property (nonatomic,strong) NSDictionary *pickerData;
@property (nonatomic,strong) NSArray *pickerProvincesData;
@property (nonatomic,strong) NSArray *pickerCitiesData;
- (IBAction)onclick:(id)sender;
@end
