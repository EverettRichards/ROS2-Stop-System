#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__AmbientLight() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__AmbientLight__init(msg: *mut AmbientLight) -> bool;
    fn dbw_ford_msgs__msg__AmbientLight__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AmbientLight>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__AmbientLight__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AmbientLight>);
    fn dbw_ford_msgs__msg__AmbientLight__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AmbientLight>, out_seq: *mut rosidl_runtime_rs::Sequence<AmbientLight>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__AmbientLight
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AmbientLight {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl AmbientLight {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DARK: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LIGHT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TWILIGHT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNNEL_ON: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TUNNEL_OFF: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_DATA: u8 = 7;

}


impl Default for AmbientLight {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__AmbientLight__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__AmbientLight__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AmbientLight {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__AmbientLight__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__AmbientLight__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__AmbientLight__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AmbientLight {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AmbientLight where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/AmbientLight";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__AmbientLight() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__BrakeCmd__init(msg: *mut BrakeCmd) -> bool;
    fn dbw_ford_msgs__msg__BrakeCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrakeCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__BrakeCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrakeCmd>);
    fn dbw_ford_msgs__msg__BrakeCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrakeCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<BrakeCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__BrakeCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Brake pedal
    /// Options defined below
    pub pedal_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_cmd_type: u8,

    /// Enable
    pub enable: bool,

    /// Clear driver overrides
    pub clear: bool,

    /// Ignore driver overrides
    pub ignore: bool,

    /// Watchdog counter (optional)
    pub count: u8,

}

impl BrakeCmd {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_NONE: u8 = 0;

    /// Unitless, range 0.15 to 0.50
    pub const CMD_PEDAL: u8 = 1;

    /// Percent of maximum torque, range 0 to 1
    pub const CMD_PERCENT: u8 = 2;

    /// Nm, range 0 to 3412, open-loop
    pub const CMD_TORQUE: u8 = 3;

    /// Nm, range 0 to 3412, closed-loop
    pub const CMD_TORQUE_RQ: u8 = 4;

    /// m/s^2, range 0 to 10
    pub const CMD_DECEL: u8 = 6;

    /// Nm, brake lights threshold
    pub const TORQUE_BOO: f32 = 520.0;

    /// Nm, maximum torque
    pub const TORQUE_MAX: f32 = 3412.0;

}


impl Default for BrakeCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__BrakeCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__BrakeCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrakeCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrakeCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrakeCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/BrakeCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeInfoReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__BrakeInfoReport__init(msg: *mut BrakeInfoReport) -> bool;
    fn dbw_ford_msgs__msg__BrakeInfoReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrakeInfoReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__BrakeInfoReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrakeInfoReport>);
    fn dbw_ford_msgs__msg__BrakeInfoReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrakeInfoReport>, out_seq: *mut rosidl_runtime_rs::Sequence<BrakeInfoReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__BrakeInfoReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeInfoReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Wheel torques (Nm)
    pub brake_torque_request: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_torque_actual: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_torque_actual: f32,

    /// Vehicle Acceleration (m/s^2)
    pub accel_over_ground: f32,

    /// Brake Pedal
    pub brake_pedal_qf: super::super::msg::rmw::QualityFactor,

    /// Hill Start Assist
    pub hsa: super::super::msg::rmw::HillStartAssist,

    /// Anti-lock Brakes
    pub abs_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub abs_enabled: bool,

    /// Stability Control
    pub stab_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stab_enabled: bool,

    /// Traction Control
    pub trac_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trac_enabled: bool,

    /// Parking Brake
    pub parking_brake: super::super::msg::rmw::ParkingBrake,

    /// Misc
    pub stationary: bool,

}



impl Default for BrakeInfoReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__BrakeInfoReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__BrakeInfoReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrakeInfoReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeInfoReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeInfoReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeInfoReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrakeInfoReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrakeInfoReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/BrakeInfoReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeInfoReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__BrakeReport__init(msg: *mut BrakeReport) -> bool;
    fn dbw_ford_msgs__msg__BrakeReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BrakeReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__BrakeReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BrakeReport>);
    fn dbw_ford_msgs__msg__BrakeReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BrakeReport>, out_seq: *mut rosidl_runtime_rs::Sequence<BrakeReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__BrakeReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Brake pedal
    /// Unitless, range 0.15 to 0.50
    pub pedal_input: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_output: f32,

    /// Braking torque (Nm)
    pub torque_input: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_output: f32,

    /// Braking decel (m/s^2)
    pub decel_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub decel_output: f32,

    /// Brake On Off (BOO)
    pub boo_cmd: bool,

    /// Status
    /// Enabled
    pub enabled: bool,

    /// Driver override
    pub override_: bool,

    /// Driver activity
    pub driver: bool,

    /// Command timeout
    pub timeout: bool,

    /// Watchdog Counter
    pub watchdog_counter: super::super::msg::rmw::WatchdogCounter,


    // This member is not documented.
    #[allow(missing_docs)]
    pub watchdog_braking: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_wdc: bool,

    /// Faults
    pub fault_ch1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_ch2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_power: bool,

}



impl Default for BrakeReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__BrakeReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__BrakeReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BrakeReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__BrakeReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BrakeReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BrakeReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/BrakeReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__BrakeReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__DriverAssistReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__DriverAssistReport__init(msg: *mut DriverAssistReport) -> bool;
    fn dbw_ford_msgs__msg__DriverAssistReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriverAssistReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__DriverAssistReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriverAssistReport>);
    fn dbw_ford_msgs__msg__DriverAssistReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriverAssistReport>, out_seq: *mut rosidl_runtime_rs::Sequence<DriverAssistReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__DriverAssistReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriverAssistReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Vehicle Decceleration (m/s^2)
    pub decel: f32,

    /// Deceleration source
    pub decel_src: u8,

    /// FCW Status
    pub fcw_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fcw_active: bool,

    /// AEB Status
    pub aeb_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aeb_precharge: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aeb_braking: bool,

    /// ACC Status
    pub acc_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_braking: bool,

}

impl DriverAssistReport {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECEL_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECEL_AEB: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECEL_ACC: u8 = 2;

}


impl Default for DriverAssistReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__DriverAssistReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__DriverAssistReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriverAssistReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__DriverAssistReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__DriverAssistReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__DriverAssistReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriverAssistReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriverAssistReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/DriverAssistReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__DriverAssistReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__FuelLevelReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__FuelLevelReport__init(msg: *mut FuelLevelReport) -> bool;
    fn dbw_ford_msgs__msg__FuelLevelReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FuelLevelReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__FuelLevelReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FuelLevelReport>);
    fn dbw_ford_msgs__msg__FuelLevelReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FuelLevelReport>, out_seq: *mut rosidl_runtime_rs::Sequence<FuelLevelReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__FuelLevelReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FuelLevelReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Fuel level (%, 0 to 100)
    pub fuel_level: f32,

    /// 12V battery voltage
    pub battery_12v: f32,

    /// Hybrid battery voltage
    pub battery_hev: f32,

    /// Odometer (km, 0.1km resolution)
    pub odometer: f32,

}



impl Default for FuelLevelReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__FuelLevelReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__FuelLevelReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FuelLevelReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__FuelLevelReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__FuelLevelReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__FuelLevelReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FuelLevelReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FuelLevelReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/FuelLevelReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__FuelLevelReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__GearCmd__init(msg: *mut GearCmd) -> bool;
    fn dbw_ford_msgs__msg__GearCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GearCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__GearCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GearCmd>);
    fn dbw_ford_msgs__msg__GearCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GearCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<GearCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__GearCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Gear command enumeration
    pub cmd: super::super::msg::rmw::Gear,

    /// Clear driver overrides
    pub clear: bool,

}



impl Default for GearCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__GearCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__GearCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GearCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GearCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GearCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/GearCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Gear() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__Gear__init(msg: *mut Gear) -> bool;
    fn dbw_ford_msgs__msg__Gear__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Gear>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__Gear__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Gear>);
    fn dbw_ford_msgs__msg__Gear__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Gear>, out_seq: *mut rosidl_runtime_rs::Sequence<Gear>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__Gear
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Gear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gear: u8,

}

impl Gear {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REVERSE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NEUTRAL: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LOW: u8 = 5;

}


impl Default for Gear {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__Gear__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__Gear__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Gear {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Gear__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Gear__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Gear__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Gear {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Gear where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/Gear";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Gear() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearNum() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__GearNum__init(msg: *mut GearNum) -> bool;
    fn dbw_ford_msgs__msg__GearNum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GearNum>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__GearNum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GearNum>);
    fn dbw_ford_msgs__msg__GearNum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GearNum>, out_seq: *mut rosidl_runtime_rs::Sequence<GearNum>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__GearNum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearNum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub num: u8,

}

impl GearNum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D01: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D02: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D03: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D04: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D05: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D06: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D07: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D08: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D09: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DRIVE_D10: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NEUTRAL: u8 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REVERSE_R01: u8 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REVERSE_R02: u8 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARK: u8 = 31;

}


impl Default for GearNum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__GearNum__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__GearNum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GearNum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearNum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearNum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearNum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GearNum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GearNum where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/GearNum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearNum() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearReject() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__GearReject__init(msg: *mut GearReject) -> bool;
    fn dbw_ford_msgs__msg__GearReject__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GearReject>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__GearReject__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GearReject>);
    fn dbw_ford_msgs__msg__GearReject__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GearReject>, out_seq: *mut rosidl_runtime_rs::Sequence<GearReject>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__GearReject
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearReject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl GearReject {
    /// Not rejected
    pub const NONE: u8 = 0;

    /// Shift in progress
    pub const SHIFT_IN_PROGRESS: u8 = 1;

    /// Override on brake, throttle, or steering
    pub const OVERRIDE: u8 = 2;

    /// Rotary shifter can't shift to Low
    pub const ROTARY_LOW: u8 = 3;

    /// Rotary shifter can't shift out of Park
    pub const ROTARY_PARK: u8 = 4;

    /// Rejected by vehicle (try pressing the brakes)
    pub const VEHICLE: u8 = 5;

    /// Unsupported gear command
    pub const UNSUPPORTED: u8 = 6;

    /// System in fault state
    pub const FAULT: u8 = 7;

}


impl Default for GearReject {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__GearReject__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__GearReject__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GearReject {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReject__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReject__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReject__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GearReject {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GearReject where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/GearReject";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearReject() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__GearReport__init(msg: *mut GearReport) -> bool;
    fn dbw_ford_msgs__msg__GearReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GearReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__GearReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GearReport>);
    fn dbw_ford_msgs__msg__GearReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GearReport>, out_seq: *mut rosidl_runtime_rs::Sequence<GearReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__GearReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Current gear enumeration
    pub state: super::super::msg::rmw::Gear,

    /// Gear command enumeration
    pub cmd: super::super::msg::rmw::Gear,

    /// Gear reject enumeration
    pub reject: super::super::msg::rmw::GearReject,

    /// Status
    pub ready: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub override_: bool,

    /// Faults
    pub fault_bus: bool,

}



impl Default for GearReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__GearReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__GearReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GearReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__GearReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GearReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GearReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/GearReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__GearReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__HillStartAssist() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__HillStartAssist__init(msg: *mut HillStartAssist) -> bool;
    fn dbw_ford_msgs__msg__HillStartAssist__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HillStartAssist>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__HillStartAssist__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HillStartAssist>);
    fn dbw_ford_msgs__msg__HillStartAssist__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HillStartAssist>, out_seq: *mut rosidl_runtime_rs::Sequence<HillStartAssist>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__HillStartAssist
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HillStartAssist {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl HillStartAssist {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_INACTIVE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_FINDING_GRADIENT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_ACTIVE_PRESSED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_ACTIVE_RELEASED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_FAST_RELEASE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_SLOW_RELEASE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_FAILED: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STAT_UNDEFINED: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_AUTO: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MANUAL: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNDEFINED: u8 = 3;

}


impl Default for HillStartAssist {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__HillStartAssist__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__HillStartAssist__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HillStartAssist {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__HillStartAssist__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__HillStartAssist__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__HillStartAssist__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HillStartAssist {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HillStartAssist where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/HillStartAssist";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__HillStartAssist() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Ignition() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__Ignition__init(msg: *mut Ignition) -> bool;
    fn dbw_ford_msgs__msg__Ignition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ignition>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__Ignition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ignition>);
    fn dbw_ford_msgs__msg__Ignition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ignition>, out_seq: *mut rosidl_runtime_rs::Sequence<Ignition>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__Ignition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ignition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl Ignition {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACCESSORY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RUN: u8 = 3;

}


impl Default for Ignition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__Ignition__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__Ignition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ignition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Ignition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Ignition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Ignition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ignition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ignition where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/Ignition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Ignition() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__MiscCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__MiscCmd__init(msg: *mut MiscCmd) -> bool;
    fn dbw_ford_msgs__msg__MiscCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MiscCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__MiscCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MiscCmd>);
    fn dbw_ford_msgs__msg__MiscCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MiscCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<MiscCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__MiscCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MiscCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Turn signal command enumeration
    pub cmd: super::super::msg::rmw::TurnSignal,

    /// Parking brake command enumeration
    pub pbrk: super::super::msg::rmw::ParkingBrakeCmd,

}



impl Default for MiscCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__MiscCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__MiscCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MiscCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__MiscCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__MiscCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__MiscCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MiscCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MiscCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/MiscCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__MiscCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Misc1Report() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__Misc1Report__init(msg: *mut Misc1Report) -> bool;
    fn dbw_ford_msgs__msg__Misc1Report__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Misc1Report>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__Misc1Report__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Misc1Report>);
    fn dbw_ford_msgs__msg__Misc1Report__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Misc1Report>, out_seq: *mut rosidl_runtime_rs::Sequence<Misc1Report>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__Misc1Report
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Misc1Report {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Turn Signal enumeration
    pub turn_signal: super::super::msg::rmw::TurnSignal,

    /// High beams
    pub high_beam_headlights: bool,

    /// Front Windshield Wipers enumeration
    pub wiper: super::super::msg::rmw::Wiper,

    /// Ambient Light Sensor enumeration
    pub ambient_light: super::super::msg::rmw::AmbientLight,

    /// Outside air temperature
    /// Degrees Celsius
    pub outside_temperature: f32,

    /// Buttons
    /// Cruise Control On
    pub btn_cc_on: bool,

    /// Cruise Control Off
    pub btn_cc_off: bool,

    /// Cruise Control On/Off Toggle
    pub btn_cc_on_off: bool,

    /// Cruise Control Resume
    pub btn_cc_res: bool,

    /// Cruise Control Cancel
    pub btn_cc_cncl: bool,

    /// Cruise Control Resume/Cancel
    pub btn_cc_res_cncl: bool,

    /// Cruise Control Resume+
    pub btn_cc_res_inc: bool,

    /// Cruise Control Resume-
    pub btn_cc_res_dec: bool,

    /// Cruise Control Set+
    pub btn_cc_set_inc: bool,

    /// Cruise Control Set-
    pub btn_cc_set_dec: bool,

    /// Cruise Control Gap+
    pub btn_cc_gap_inc: bool,

    /// Cruise Control Gap-
    pub btn_cc_gap_dec: bool,

    /// Lane Assist On/Off Toggle
    pub btn_la_on_off: bool,

    /// Left D-Pad OK
    pub btn_ld_ok: bool,

    /// Left D-Pad Up
    pub btn_ld_up: bool,

    /// Left D-Pad Down
    pub btn_ld_down: bool,

    /// Left D-Pad Left
    pub btn_ld_left: bool,

    /// Left D-Pad Right
    pub btn_ld_right: bool,

    /// Right D-Pad OK
    pub btn_rd_ok: bool,

    /// Right D-Pad Up
    pub btn_rd_up: bool,

    /// Right D-Pad Down
    pub btn_rd_down: bool,

    /// Right D-Pad Left
    pub btn_rd_left: bool,

    /// Right D-Pad Right
    pub btn_rd_right: bool,

    /// Volume increment
    pub btn_vol_inc: bool,

    /// Volume decrement
    pub btn_vol_dec: bool,

    /// Volume mute
    pub btn_mute: bool,

    /// Media (source)
    pub btn_media: bool,

    /// Media previous
    pub btn_prev: bool,

    /// Media next
    pub btn_next: bool,

    /// Speak
    pub btn_speak: bool,

    /// Call start/answer
    pub btn_call_start: bool,

    /// Call end/disconnect
    pub btn_call_end: bool,

    /// Faults
    pub fault_bus: bool,

    /// Doors
    pub door_driver: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_passenger: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_rear_left: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_rear_right: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_hood: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_trunk: bool,

    /// Passenger seat
    pub passenger_detect: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub passenger_airbag: bool,

    /// Seat Belts
    pub buckle_driver: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buckle_passenger: bool,

}



impl Default for Misc1Report {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__Misc1Report__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__Misc1Report__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Misc1Report {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Misc1Report__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Misc1Report__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Misc1Report__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Misc1Report {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Misc1Report where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/Misc1Report";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Misc1Report() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__OnePedal() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__OnePedal__init(msg: *mut OnePedal) -> bool;
    fn dbw_ford_msgs__msg__OnePedal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OnePedal>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__OnePedal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OnePedal>);
    fn dbw_ford_msgs__msg__OnePedal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OnePedal>, out_seq: *mut rosidl_runtime_rs::Sequence<OnePedal>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__OnePedal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OnePedal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl OnePedal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ON: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT: u8 = 3;

}


impl Default for OnePedal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__OnePedal__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__OnePedal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OnePedal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__OnePedal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__OnePedal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__OnePedal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OnePedal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OnePedal where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/OnePedal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__OnePedal() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ParkingBrake() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__ParkingBrake__init(msg: *mut ParkingBrake) -> bool;
    fn dbw_ford_msgs__msg__ParkingBrake__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ParkingBrake>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__ParkingBrake__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ParkingBrake>);
    fn dbw_ford_msgs__msg__ParkingBrake__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ParkingBrake>, out_seq: *mut rosidl_runtime_rs::Sequence<ParkingBrake>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__ParkingBrake
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParkingBrake {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl ParkingBrake {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRANS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ON: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT: u8 = 3;

}


impl Default for ParkingBrake {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__ParkingBrake__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__ParkingBrake__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ParkingBrake {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrake__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrake__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrake__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ParkingBrake {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ParkingBrake where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/ParkingBrake";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ParkingBrake() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ParkingBrakeCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__ParkingBrakeCmd__init(msg: *mut ParkingBrakeCmd) -> bool;
    fn dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ParkingBrakeCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ParkingBrakeCmd>);
    fn dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ParkingBrakeCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ParkingBrakeCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__ParkingBrakeCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParkingBrakeCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: u8,

}

impl ParkingBrakeCmd {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ON: u8 = 1;

    /// Not implemented
    pub const OFF: u8 = 2;

}


impl Default for ParkingBrakeCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__ParkingBrakeCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__ParkingBrakeCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ParkingBrakeCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ParkingBrakeCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ParkingBrakeCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ParkingBrakeCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/ParkingBrakeCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ParkingBrakeCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__QualityFactor() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__QualityFactor__init(msg: *mut QualityFactor) -> bool;
    fn dbw_ford_msgs__msg__QualityFactor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QualityFactor>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__QualityFactor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QualityFactor>);
    fn dbw_ford_msgs__msg__QualityFactor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QualityFactor>, out_seq: *mut rosidl_runtime_rs::Sequence<QualityFactor>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__QualityFactor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QualityFactor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl QualityFactor {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OK: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EMPTY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CORRUPT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT: u8 = 3;

}


impl Default for QualityFactor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__QualityFactor__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__QualityFactor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QualityFactor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__QualityFactor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__QualityFactor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__QualityFactor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QualityFactor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QualityFactor where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/QualityFactor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__QualityFactor() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SteeringCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__SteeringCmd__init(msg: *mut SteeringCmd) -> bool;
    fn dbw_ford_msgs__msg__SteeringCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SteeringCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__SteeringCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SteeringCmd>);
    fn dbw_ford_msgs__msg__SteeringCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SteeringCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<SteeringCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__SteeringCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Steering Wheel
    /// rad, range -9.6 to 9.6
    pub steering_wheel_angle_cmd: f32,

    /// rad/s, range 0 to 17.5, 0 = default
    pub steering_wheel_angle_velocity: f32,

    /// Nm, range -8.0 to 8.0
    pub steering_wheel_torque_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_type: u8,

    /// Enable
    pub enable: bool,

    /// Clear driver overrides
    pub clear: bool,

    /// Ignore driver overrides
    pub ignore: bool,

    /// Disable or activate the driver override audible warning
    pub quiet: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alert: bool,

    /// Watchdog counter (optional)
    pub count: u8,

}

impl SteeringCmd {
    /// Command types
    pub const CMD_ANGLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_TORQUE: u8 = 1;

    /// Maximum values
    /// rad, maximum angle
    pub const ANGLE_MAX: f32 = 9.6;

    /// rad/s, maximum velocity
    pub const VELOCITY_MAX: f32 = 17.5;

    /// Nm, maximum torque
    pub const TORQUE_MAX: f32 = 8.0;

}


impl Default for SteeringCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__SteeringCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__SteeringCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SteeringCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SteeringCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SteeringCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/SteeringCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SteeringCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SteeringReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__SteeringReport__init(msg: *mut SteeringReport) -> bool;
    fn dbw_ford_msgs__msg__SteeringReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SteeringReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__SteeringReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SteeringReport>);
    fn dbw_ford_msgs__msg__SteeringReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SteeringReport>, out_seq: *mut rosidl_runtime_rs::Sequence<SteeringReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__SteeringReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Steering Wheel
    /// rad
    pub steering_wheel_angle: f32,

    /// rad or Nm
    pub steering_wheel_cmd: f32,

    /// Nm
    pub steering_wheel_torque: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_wheel_cmd_type: u8,

    /// Vehicle Speed
    /// m/s
    pub speed: f32,

    /// Status
    /// Enabled
    pub enabled: bool,

    /// Driver override
    pub override_: bool,

    /// Command timeout
    pub timeout: bool,

    /// Watchdog Counter
    pub fault_wdc: bool,

    /// Faults
    pub fault_bus1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_bus2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_calibration: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_power: bool,

}

impl SteeringReport {
    /// Command types
    pub const CMD_ANGLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_TORQUE: u8 = 1;

}


impl Default for SteeringReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__SteeringReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__SteeringReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SteeringReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SteeringReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SteeringReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SteeringReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/SteeringReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SteeringReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SurroundReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__SurroundReport__init(msg: *mut SurroundReport) -> bool;
    fn dbw_ford_msgs__msg__SurroundReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SurroundReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__SurroundReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SurroundReport>);
    fn dbw_ford_msgs__msg__SurroundReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SurroundReport>, out_seq: *mut rosidl_runtime_rs::Sequence<SurroundReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__SurroundReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SurroundReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Cross Traffic Alert (CTA)
    pub cta_left_alert: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cta_right_alert: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cta_left_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cta_right_enabled: bool,

    /// Blind Spot Information System (BLIS)
    pub blis_left_alert: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blis_right_alert: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blis_left_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blis_right_enabled: bool,

    /// Sonar Sensors
    pub sonar_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sonar_fault: bool,

    /// Sonar ranges in meters, zero is no-detection
    pub sonar: [f32; 12],

}

impl SurroundReport {
    /// Sonar index enumeration
    pub const FRONT_LEFT_SIDE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRONT_LEFT_CORNER: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRONT_LEFT_CENTER: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRONT_RIGHT_CENTER: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRONT_RIGHT_CORNER: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FRONT_RIGHT_SIDE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_LEFT_SIDE: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_LEFT_CORNER: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_LEFT_CENTER: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_RIGHT_CENTER: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_RIGHT_CORNER: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REAR_RIGHT_SIDE: u8 = 11;

}


impl Default for SurroundReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__SurroundReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__SurroundReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SurroundReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SurroundReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SurroundReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__SurroundReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SurroundReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SurroundReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/SurroundReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__SurroundReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__ThrottleCmd__init(msg: *mut ThrottleCmd) -> bool;
    fn dbw_ford_msgs__msg__ThrottleCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ThrottleCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__ThrottleCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ThrottleCmd>);
    fn dbw_ford_msgs__msg__ThrottleCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ThrottleCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ThrottleCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__ThrottleCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Throttle pedal
    /// Options defined below
    pub pedal_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_cmd_type: u8,

    /// Enable
    pub enable: bool,

    /// Clear driver overrides
    pub clear: bool,

    /// Ignore driver overrides
    pub ignore: bool,

    /// Watchdog counter (optional)
    pub count: u8,

}

impl ThrottleCmd {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_NONE: u8 = 0;

    /// Unitless, range 0.15 to 0.80
    pub const CMD_PEDAL: u8 = 1;

    /// Percent of maximum throttle, range 0 to 1
    pub const CMD_PERCENT: u8 = 2;

}


impl Default for ThrottleCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__ThrottleCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__ThrottleCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ThrottleCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ThrottleCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ThrottleCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/ThrottleCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleInfoReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__ThrottleInfoReport__init(msg: *mut ThrottleInfoReport) -> bool;
    fn dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ThrottleInfoReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ThrottleInfoReport>);
    fn dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ThrottleInfoReport>, out_seq: *mut rosidl_runtime_rs::Sequence<ThrottleInfoReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__ThrottleInfoReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleInfoReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Throttle Pedal
    /// Throttle pedal percent, range 0 to 1
    pub throttle_pc: f32,

    /// Throttle pedal change per second (1/s)
    pub throttle_rate: f32,

    /// Non-zero is limp-home
    pub throttle_pedal_qf: super::super::msg::rmw::QualityFactor,

    /// One-pedal-drive mode
    pub one_pedal: super::super::msg::rmw::OnePedal,

    /// Engine
    /// Engine Speed (rpm)
    pub engine_rpm: f32,

    /// Gear Num
    /// Gear Number
    pub gear_num: super::super::msg::rmw::GearNum,

    /// Ignition status
    /// Ignition status (enum)
    pub ignition: super::super::msg::rmw::Ignition,

    /// Battery Current
    /// Battery Current (Amps)
    pub batt_curr: f32,

}



impl Default for ThrottleInfoReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__ThrottleInfoReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__ThrottleInfoReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ThrottleInfoReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleInfoReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ThrottleInfoReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ThrottleInfoReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/ThrottleInfoReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleInfoReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__ThrottleReport__init(msg: *mut ThrottleReport) -> bool;
    fn dbw_ford_msgs__msg__ThrottleReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ThrottleReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__ThrottleReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ThrottleReport>);
    fn dbw_ford_msgs__msg__ThrottleReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ThrottleReport>, out_seq: *mut rosidl_runtime_rs::Sequence<ThrottleReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__ThrottleReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Throttle pedal
    /// Unitless, range 0.15 to 0.80
    pub pedal_input: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_cmd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedal_output: f32,

    /// Status
    /// Enabled
    pub enabled: bool,

    /// Driver override
    pub override_: bool,

    /// Driver activity
    pub driver: bool,

    /// Command timeout
    pub timeout: bool,

    /// Watchdog Counter
    pub watchdog_counter: super::super::msg::rmw::WatchdogCounter,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_wdc: bool,

    /// Faults
    pub fault_ch1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_ch2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_power: bool,

}



impl Default for ThrottleReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__ThrottleReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__ThrottleReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ThrottleReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__ThrottleReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ThrottleReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ThrottleReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/ThrottleReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__ThrottleReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TirePressureReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__TirePressureReport__init(msg: *mut TirePressureReport) -> bool;
    fn dbw_ford_msgs__msg__TirePressureReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TirePressureReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__TirePressureReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TirePressureReport>);
    fn dbw_ford_msgs__msg__TirePressureReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TirePressureReport>, out_seq: *mut rosidl_runtime_rs::Sequence<TirePressureReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__TirePressureReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TirePressureReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Tire pressures (kPa)
    pub front_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_right: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_right: f32,

}



impl Default for TirePressureReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__TirePressureReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__TirePressureReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TirePressureReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TirePressureReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TirePressureReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TirePressureReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TirePressureReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TirePressureReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/TirePressureReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TirePressureReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TurnSignal() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__TurnSignal__init(msg: *mut TurnSignal) -> bool;
    fn dbw_ford_msgs__msg__TurnSignal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurnSignal>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__TurnSignal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurnSignal>);
    fn dbw_ford_msgs__msg__TurnSignal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurnSignal>, out_seq: *mut rosidl_runtime_rs::Sequence<TurnSignal>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__TurnSignal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurnSignal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl TurnSignal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAZARD: u8 = 3;

}


impl Default for TurnSignal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__TurnSignal__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__TurnSignal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurnSignal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TurnSignal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TurnSignal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TurnSignal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurnSignal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurnSignal where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/TurnSignal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TurnSignal() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TwistCmd() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__TwistCmd__init(msg: *mut TwistCmd) -> bool;
    fn dbw_ford_msgs__msg__TwistCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwistCmd>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__TwistCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwistCmd>);
    fn dbw_ford_msgs__msg__TwistCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwistCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<TwistCmd>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__TwistCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,

    /// m/s^2, zero = no limit
    pub accel_limit: f32,

    /// m/s^2, zero = no limit
    pub decel_limit: f32,

}



impl Default for TwistCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__TwistCmd__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__TwistCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwistCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TwistCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TwistCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__TwistCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwistCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwistCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/TwistCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__TwistCmd() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WatchdogCounter() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__WatchdogCounter__init(msg: *mut WatchdogCounter) -> bool;
    fn dbw_ford_msgs__msg__WatchdogCounter__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WatchdogCounter>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__WatchdogCounter__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WatchdogCounter>);
    fn dbw_ford_msgs__msg__WatchdogCounter__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WatchdogCounter>, out_seq: *mut rosidl_runtime_rs::Sequence<WatchdogCounter>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__WatchdogCounter
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WatchdogCounter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u8,

}

impl WatchdogCounter {
    /// No source for watchdog counter fault
    pub const NONE: u8 = 0;

    /// Fault determined by brake controller
    pub const OTHER_BRAKE: u8 = 1;

    /// Fault determined by throttle controller
    pub const OTHER_THROTTLE: u8 = 2;

    /// Fault determined by steering controller
    pub const OTHER_STEERING: u8 = 3;

    /// Brake command counter failed to increment
    pub const BRAKE_COUNTER: u8 = 4;

    /// Brake transition to disabled while in gear or moving
    pub const BRAKE_DISABLED: u8 = 5;

    /// Brake command timeout after 100ms
    pub const BRAKE_COMMAND: u8 = 6;

    /// Brake report timeout after 100ms
    pub const BRAKE_REPORT: u8 = 7;

    /// Throttle command counter failed to increment
    pub const THROTTLE_COUNTER: u8 = 8;

    /// Throttle transition to disabled while in gear or moving
    pub const THROTTLE_DISABLED: u8 = 9;

    /// Throttle command timeout after 100ms
    pub const THROTTLE_COMMAND: u8 = 10;

    /// Throttle report timeout after 100ms
    pub const THROTTLE_REPORT: u8 = 11;

    /// Steering command counter failed to increment
    pub const STEERING_COUNTER: u8 = 12;

    /// Steering transition to disabled while in gear or moving
    pub const STEERING_DISABLED: u8 = 13;

    /// Steering command timeout after 100ms
    pub const STEERING_COMMAND: u8 = 14;

    /// Steering report timeout after 100ms
    pub const STEERING_REPORT: u8 = 15;

}


impl Default for WatchdogCounter {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__WatchdogCounter__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__WatchdogCounter__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WatchdogCounter {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WatchdogCounter__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WatchdogCounter__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WatchdogCounter__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WatchdogCounter {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WatchdogCounter where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/WatchdogCounter";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WatchdogCounter() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WheelPositionReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__WheelPositionReport__init(msg: *mut WheelPositionReport) -> bool;
    fn dbw_ford_msgs__msg__WheelPositionReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelPositionReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__WheelPositionReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelPositionReport>);
    fn dbw_ford_msgs__msg__WheelPositionReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelPositionReport>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelPositionReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__WheelPositionReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelPositionReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Wheel positions (counts)
    pub front_left: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_right: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_left: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_right: i16,

}

impl WheelPositionReport {
    /// Conversion factor
    pub const COUNTS_PER_REV: f32 = 125.5;

}


impl Default for WheelPositionReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__WheelPositionReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__WheelPositionReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelPositionReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelPositionReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelPositionReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelPositionReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelPositionReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelPositionReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/WheelPositionReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WheelPositionReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WheelSpeedReport() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__WheelSpeedReport__init(msg: *mut WheelSpeedReport) -> bool;
    fn dbw_ford_msgs__msg__WheelSpeedReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelSpeedReport>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__WheelSpeedReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelSpeedReport>);
    fn dbw_ford_msgs__msg__WheelSpeedReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelSpeedReport>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelSpeedReport>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__WheelSpeedReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelSpeedReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Wheel speeds (rad/s)
    pub front_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_right: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_right: f32,

}



impl Default for WheelSpeedReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__WheelSpeedReport__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__WheelSpeedReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelSpeedReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelSpeedReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelSpeedReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__WheelSpeedReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelSpeedReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelSpeedReport where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/WheelSpeedReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__WheelSpeedReport() }
  }
}


#[link(name = "dbw_ford_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Wiper() -> *const std::ffi::c_void;
}

#[link(name = "dbw_ford_msgs__rosidl_generator_c")]
extern "C" {
    fn dbw_ford_msgs__msg__Wiper__init(msg: *mut Wiper) -> bool;
    fn dbw_ford_msgs__msg__Wiper__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Wiper>, size: usize) -> bool;
    fn dbw_ford_msgs__msg__Wiper__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Wiper>);
    fn dbw_ford_msgs__msg__Wiper__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Wiper>, out_seq: *mut rosidl_runtime_rs::Sequence<Wiper>) -> bool;
}

// Corresponds to dbw_ford_msgs__msg__Wiper
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Wiper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl Wiper {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTO_OFF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF_MOVING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MANUAL_OFF: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MANUAL_ON: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MANUAL_LOW: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MANUAL_HIGH: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MIST_FLICK: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WASH: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTO_LOW: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTO_HIGH: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COURTESYWIPE: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUTO_ADJUST: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESERVED: u8 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STALLED: u8 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_DATA: u8 = 15;

}


impl Default for Wiper {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dbw_ford_msgs__msg__Wiper__init(&mut msg as *mut _) {
        panic!("Call to dbw_ford_msgs__msg__Wiper__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Wiper {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Wiper__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Wiper__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dbw_ford_msgs__msg__Wiper__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Wiper {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Wiper where Self: Sized {
  const TYPE_NAME: &'static str = "dbw_ford_msgs/msg/Wiper";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dbw_ford_msgs__msg__Wiper() }
  }
}


