﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "Scenario1_MeteringData.xaml.h"

void ::SDKTemplate::MeteringData::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///Scenario1_MeteringData.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}


/// <summary>
/// Auto generated class for compiled bindings.
/// </summary>
class SDKTemplate::MeteringData::MeteringData_obj1_Bindings 
    : public ::XamlBindingInfo::ReferenceTypeXamlBindings<::SDKTemplate::MeteringData>
    , public ::XamlBindingInfo::IXamlBindingTracking
{
public:
    MeteringData_obj1_Bindings()
    {
        InitializeTracking(this);
    }

private:
    ~MeteringData_obj1_Bindings()
    {
        ReleaseAllListeners();
    }

public:

    void Connect(int __connectionId, ::Platform::Object^ __target)
    {
        switch(__connectionId)
        {
            case 2: // Scenario1_MeteringData.xaml line 64
                this->obj2 = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
                break;
            case 3: // Scenario1_MeteringData.xaml line 58
                this->obj3 = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
                break;
            case 4: // Scenario1_MeteringData.xaml line 55
                this->obj4 = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
                break;
            case 5: // Scenario1_MeteringData.xaml line 46
                this->obj5 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                break;
            case 6: // Scenario1_MeteringData.xaml line 47
                this->obj6 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                break;
            case 7: // Scenario1_MeteringData.xaml line 39
                this->obj7 = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
                break;
            case 8: // Scenario1_MeteringData.xaml line 37
                this->obj8 = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
                break;
        }
    }

    void DisconnectUnloadedObject(int connectionId)
    {
        throw ref new ::Platform::InvalidArgumentException("No unloadable elements to disconnect.");
    }
private:
    // Fields for each control that has bindings.
    ::Windows::UI::Xaml::Controls::TextBox^ obj2;
    ::Windows::UI::Xaml::Documents::Run^ obj3;
    ::Windows::UI::Xaml::Documents::Run^ obj4;
    ::Windows::UI::Xaml::Controls::Button^ obj5;
    ::Windows::UI::Xaml::Controls::Button^ obj6;
    ::Windows::UI::Xaml::Controls::Slider^ obj7;
    ::Windows::UI::Xaml::Documents::Run^ obj8;
    
    // Fields for binding tracking.
    ::Windows::UI::Xaml::Data::INotifyPropertyChanged^ cachePC_ViewModel = nullptr;
    ::Windows::UI::Xaml::DependencyObject^ cacheDPC_SamplePeriodSlider_Value = nullptr;
    ::Windows::Foundation::EventRegistrationToken tokenPC_ViewModel;
    __int64 tokenDPC_SamplePeriodSlider_Value = 0;

    // Update methods for each path node used in binding steps.
    void Update_(::SDKTemplate::MeteringData^ obj, int phase)
    {
        if (obj != nullptr)
        {
            if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
            {
                this->Update_ViewModel(obj->ViewModel, phase);
                this->Update_SamplePeriodSlider(obj->SamplePeriodSlider, phase);
            }
        }
    }
    void Update_ViewModel(::SDKTemplate::ServiceViewModel^ obj, int phase)
    {
        this->_bindingsTracking->UpdatePropertyChangedListener(obj, &this->cachePC_ViewModel, &tokenPC_ViewModel);
        if (obj != nullptr)
        {
            if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
            {
                this->Update_ViewModel_SampleMessage(obj->SampleMessage, phase);
                this->Update_ViewModel_ActualRpcCallbackRate(obj->ActualRpcCallbackRate, phase);
                this->Update_ViewModel_ExpectedRpcCallbackRate(obj->ExpectedRpcCallbackRate, phase);
                this->Update_ViewModel_StartButtonEnabled(obj->StartButtonEnabled, phase);
                this->Update_ViewModel_StopButtonEnabled(obj->StopButtonEnabled, phase);
                this->Update_ViewModel_SliderEnabled(obj->SliderEnabled, phase);
                this->Update_ViewModel_SliderValue(obj->SliderValue, phase);
            }
        }
    }
    void Update_ViewModel_SampleMessage(::Platform::String^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 64
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_TextBox_Text(this->obj2, obj, nullptr);
        }
    }
    void Update_ViewModel_ActualRpcCallbackRate(::Platform::String^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 58
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Documents_Run_Text(this->obj3, obj, nullptr);
        }
    }
    void Update_ViewModel_ExpectedRpcCallbackRate(::Platform::String^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 55
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Documents_Run_Text(this->obj4, obj, nullptr);
        }
    }
    void Update_ViewModel_StartButtonEnabled(::Platform::Boolean obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 46
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_Control_IsEnabled(this->obj5, obj);
        }
    }
    void Update_ViewModel_StopButtonEnabled(::Platform::Boolean obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 47
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_Control_IsEnabled(this->obj6, obj);
        }
    }
    void Update_ViewModel_SliderEnabled(::Platform::Boolean obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 39
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_Control_IsEnabled(this->obj7, obj);
        }
    }
    void Update_ViewModel_SliderValue(::default::float64 obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 39
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_Primitives_RangeBase_Value(this->obj7, obj);
        }
    }
    void Update_SamplePeriodSlider(::Windows::UI::Xaml::Controls::Slider^ obj, int phase)
    {
        this->_bindingsTracking->UpdateDependencyPropertyChangedListener(obj, ::Windows::UI::Xaml::Controls::Slider::ValueProperty, &this->cacheDPC_SamplePeriodSlider_Value, &this->tokenDPC_SamplePeriodSlider_Value);
        if (obj != nullptr)
        {
            if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
            {
                this->Update_SamplePeriodSlider_Value(obj->Value, phase);
            }
        }
    }
    void Update_SamplePeriodSlider_Value(::default::float64 obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
        {
            // Scenario1_MeteringData.xaml line 37
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Documents_Run_Text(this->obj8, obj.ToString(), nullptr);
        }
    }

    virtual void ReleaseAllListeners() override
    {
        this->_bindingsTracking->UpdatePropertyChangedListener(nullptr, &this->cachePC_ViewModel, &tokenPC_ViewModel);
        this->_bindingsTracking->UpdateDependencyPropertyChangedListener(nullptr, ::Windows::UI::Xaml::Controls::Slider::ValueProperty, &this->cacheDPC_SamplePeriodSlider_Value, &this->tokenDPC_SamplePeriodSlider_Value);
    }

    virtual void PropertyChanged(Platform::Object^ sender, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs^ e) override
    {
        if (cachePC_ViewModel != nullptr && cachePC_ViewModel->Equals(sender))
        {
            ::Platform::String^ propName = e->PropertyName;
            ::SDKTemplate::ServiceViewModel^ obj = safe_cast<::SDKTemplate::ServiceViewModel^>(sender);
            if (propName == nullptr || propName->IsEmpty())
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_SampleMessage(obj->SampleMessage, DATA_CHANGED);
                    this->Update_ViewModel_ActualRpcCallbackRate(obj->ActualRpcCallbackRate, DATA_CHANGED);
                    this->Update_ViewModel_ExpectedRpcCallbackRate(obj->ExpectedRpcCallbackRate, DATA_CHANGED);
                    this->Update_ViewModel_StartButtonEnabled(obj->StartButtonEnabled, DATA_CHANGED);
                    this->Update_ViewModel_StopButtonEnabled(obj->StopButtonEnabled, DATA_CHANGED);
                    this->Update_ViewModel_SliderEnabled(obj->SliderEnabled, DATA_CHANGED);
                    this->Update_ViewModel_SliderValue(obj->SliderValue, DATA_CHANGED);
                }
            }
            else if (propName == "SampleMessage")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_SampleMessage(obj->SampleMessage, DATA_CHANGED);
                }
            }
            else if (propName == "ActualRpcCallbackRate")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_ActualRpcCallbackRate(obj->ActualRpcCallbackRate, DATA_CHANGED);
                }
            }
            else if (propName == "ExpectedRpcCallbackRate")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_ExpectedRpcCallbackRate(obj->ExpectedRpcCallbackRate, DATA_CHANGED);
                }
            }
            else if (propName == "StartButtonEnabled")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_StartButtonEnabled(obj->StartButtonEnabled, DATA_CHANGED);
                }
            }
            else if (propName == "StopButtonEnabled")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_StopButtonEnabled(obj->StopButtonEnabled, DATA_CHANGED);
                }
            }
            else if (propName == "SliderEnabled")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_SliderEnabled(obj->SliderEnabled, DATA_CHANGED);
                }
            }
            else if (propName == "SliderValue")
            {
                if (obj != nullptr)
                {
                    this->Update_ViewModel_SliderValue(obj->SliderValue, DATA_CHANGED);
                }
            }
        }
    }

    void CollectionChanged(::Platform::Object^ sender, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs^ e)
    {
    }

    void VectorChanged(::Platform::Object^ sender, ::Windows::Foundation::Collections::IVectorChangedEventArgs^ e)
    {
    }

    void MapChanged(::Platform::Object^ sender, ::Windows::Foundation::Collections::IMapChangedEventArgs<::Platform::String^>^ e)
    {
    }

    void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject^ sender, ::Windows::UI::Xaml::DependencyProperty^ prop)
    {
        if (sender != nullptr)
        {
            if (sender->Equals(this->cacheDPC_SamplePeriodSlider_Value) && ::Windows::UI::Xaml::Controls::Slider::ValueProperty->Equals(prop))
            {
                ::Windows::UI::Xaml::Controls::Slider^ obj = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(sender);
                if (obj != nullptr)
                {
                    this->Update_SamplePeriodSlider_Value(obj->Value, DATA_CHANGED);
                }
            }
        }
    }
};

void ::SDKTemplate::MeteringData::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 5:
        {
            ::Windows::UI::Xaml::Controls::Button^ element5 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element5))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SDKTemplate::MeteringData::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MeteringData::button_Click_StartMetering);
        }
        break;
    case 6:
        {
            ::Windows::UI::Xaml::Controls::Button^ element6 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element6))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SDKTemplate::MeteringData::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MeteringData::button_Click_StopMetering);
        }
        break;
    case 7:
        {
            this->SamplePeriodSlider = safe_cast<::Windows::UI::Xaml::Controls::Slider^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Slider^>(this->SamplePeriodSlider))->ValueChanged += ref new ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler(this, (void (::SDKTemplate::MeteringData::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs^))&MeteringData::slider_ValueChanged);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::SDKTemplate::MeteringData::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    ::XamlBindingInfo::XamlBindings^ bindings = nullptr;
    switch (__connectionId)
    {
        case 1: // Scenario1_MeteringData.xaml line 13
            {
                ::Windows::UI::Xaml::Controls::Page^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Page^>(__target);
                MeteringData_obj1_Bindings* objBindings = new MeteringData_obj1_Bindings();
                objBindings->SetDataRoot(this);
                bindings = ref new ::XamlBindingInfo::XamlBindings(objBindings);
                this->Bindings = bindings;
                element1->Loading += ref new ::Windows::Foundation::TypedEventHandler<::Windows::UI::Xaml::FrameworkElement^, ::Platform::Object^>(bindings, &::XamlBindingInfo::XamlBindings::Loading);
            }
            break;
    }
    return bindings;
}

#pragma warning(pop)


