#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dbw_ford_msgs__msg__AmbientLight

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AmbientLight::default())
  }
}

impl rosidl_runtime_rs::Message for AmbientLight {
  type RmwMsg = super::msg::rmw::AmbientLight;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__BrakeCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrakeCmd::default())
  }
}

impl rosidl_runtime_rs::Message for BrakeCmd {
  type RmwMsg = super::msg::rmw::BrakeCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pedal_cmd: msg.pedal_cmd,
        pedal_cmd_type: msg.pedal_cmd_type,
        enable: msg.enable,
        clear: msg.clear,
        ignore: msg.ignore,
        count: msg.count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pedal_cmd: msg.pedal_cmd,
      pedal_cmd_type: msg.pedal_cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      count: msg.count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pedal_cmd: msg.pedal_cmd,
      pedal_cmd_type: msg.pedal_cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      count: msg.count,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__BrakeInfoReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeInfoReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub brake_pedal_qf: super::msg::QualityFactor,

    /// Hill Start Assist
    pub hsa: super::msg::HillStartAssist,

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
    pub parking_brake: super::msg::ParkingBrake,

    /// Misc
    pub stationary: bool,

}



impl Default for BrakeInfoReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrakeInfoReport::default())
  }
}

impl rosidl_runtime_rs::Message for BrakeInfoReport {
  type RmwMsg = super::msg::rmw::BrakeInfoReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        brake_torque_request: msg.brake_torque_request,
        brake_torque_actual: msg.brake_torque_actual,
        wheel_torque_actual: msg.wheel_torque_actual,
        accel_over_ground: msg.accel_over_ground,
        brake_pedal_qf: super::msg::QualityFactor::into_rmw_message(std::borrow::Cow::Owned(msg.brake_pedal_qf)).into_owned(),
        hsa: super::msg::HillStartAssist::into_rmw_message(std::borrow::Cow::Owned(msg.hsa)).into_owned(),
        abs_active: msg.abs_active,
        abs_enabled: msg.abs_enabled,
        stab_active: msg.stab_active,
        stab_enabled: msg.stab_enabled,
        trac_active: msg.trac_active,
        trac_enabled: msg.trac_enabled,
        parking_brake: super::msg::ParkingBrake::into_rmw_message(std::borrow::Cow::Owned(msg.parking_brake)).into_owned(),
        stationary: msg.stationary,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      brake_torque_request: msg.brake_torque_request,
      brake_torque_actual: msg.brake_torque_actual,
      wheel_torque_actual: msg.wheel_torque_actual,
      accel_over_ground: msg.accel_over_ground,
        brake_pedal_qf: super::msg::QualityFactor::into_rmw_message(std::borrow::Cow::Borrowed(&msg.brake_pedal_qf)).into_owned(),
        hsa: super::msg::HillStartAssist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.hsa)).into_owned(),
      abs_active: msg.abs_active,
      abs_enabled: msg.abs_enabled,
      stab_active: msg.stab_active,
      stab_enabled: msg.stab_enabled,
      trac_active: msg.trac_active,
      trac_enabled: msg.trac_enabled,
        parking_brake: super::msg::ParkingBrake::into_rmw_message(std::borrow::Cow::Borrowed(&msg.parking_brake)).into_owned(),
      stationary: msg.stationary,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      brake_torque_request: msg.brake_torque_request,
      brake_torque_actual: msg.brake_torque_actual,
      wheel_torque_actual: msg.wheel_torque_actual,
      accel_over_ground: msg.accel_over_ground,
      brake_pedal_qf: super::msg::QualityFactor::from_rmw_message(msg.brake_pedal_qf),
      hsa: super::msg::HillStartAssist::from_rmw_message(msg.hsa),
      abs_active: msg.abs_active,
      abs_enabled: msg.abs_enabled,
      stab_active: msg.stab_active,
      stab_enabled: msg.stab_enabled,
      trac_active: msg.trac_active,
      trac_enabled: msg.trac_enabled,
      parking_brake: super::msg::ParkingBrake::from_rmw_message(msg.parking_brake),
      stationary: msg.stationary,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__BrakeReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub watchdog_counter: super::msg::WatchdogCounter,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrakeReport::default())
  }
}

impl rosidl_runtime_rs::Message for BrakeReport {
  type RmwMsg = super::msg::rmw::BrakeReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pedal_input: msg.pedal_input,
        pedal_cmd: msg.pedal_cmd,
        pedal_output: msg.pedal_output,
        torque_input: msg.torque_input,
        torque_cmd: msg.torque_cmd,
        torque_output: msg.torque_output,
        decel_cmd: msg.decel_cmd,
        decel_output: msg.decel_output,
        boo_cmd: msg.boo_cmd,
        enabled: msg.enabled,
        override_: msg.override_,
        driver: msg.driver,
        timeout: msg.timeout,
        watchdog_counter: super::msg::WatchdogCounter::into_rmw_message(std::borrow::Cow::Owned(msg.watchdog_counter)).into_owned(),
        watchdog_braking: msg.watchdog_braking,
        fault_wdc: msg.fault_wdc,
        fault_ch1: msg.fault_ch1,
        fault_ch2: msg.fault_ch2,
        fault_power: msg.fault_power,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pedal_input: msg.pedal_input,
      pedal_cmd: msg.pedal_cmd,
      pedal_output: msg.pedal_output,
      torque_input: msg.torque_input,
      torque_cmd: msg.torque_cmd,
      torque_output: msg.torque_output,
      decel_cmd: msg.decel_cmd,
      decel_output: msg.decel_output,
      boo_cmd: msg.boo_cmd,
      enabled: msg.enabled,
      override_: msg.override_,
      driver: msg.driver,
      timeout: msg.timeout,
        watchdog_counter: super::msg::WatchdogCounter::into_rmw_message(std::borrow::Cow::Borrowed(&msg.watchdog_counter)).into_owned(),
      watchdog_braking: msg.watchdog_braking,
      fault_wdc: msg.fault_wdc,
      fault_ch1: msg.fault_ch1,
      fault_ch2: msg.fault_ch2,
      fault_power: msg.fault_power,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pedal_input: msg.pedal_input,
      pedal_cmd: msg.pedal_cmd,
      pedal_output: msg.pedal_output,
      torque_input: msg.torque_input,
      torque_cmd: msg.torque_cmd,
      torque_output: msg.torque_output,
      decel_cmd: msg.decel_cmd,
      decel_output: msg.decel_output,
      boo_cmd: msg.boo_cmd,
      enabled: msg.enabled,
      override_: msg.override_,
      driver: msg.driver,
      timeout: msg.timeout,
      watchdog_counter: super::msg::WatchdogCounter::from_rmw_message(msg.watchdog_counter),
      watchdog_braking: msg.watchdog_braking,
      fault_wdc: msg.fault_wdc,
      fault_ch1: msg.fault_ch1,
      fault_ch2: msg.fault_ch2,
      fault_power: msg.fault_power,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__DriverAssistReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriverAssistReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DriverAssistReport::default())
  }
}

impl rosidl_runtime_rs::Message for DriverAssistReport {
  type RmwMsg = super::msg::rmw::DriverAssistReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        decel: msg.decel,
        decel_src: msg.decel_src,
        fcw_enabled: msg.fcw_enabled,
        fcw_active: msg.fcw_active,
        aeb_enabled: msg.aeb_enabled,
        aeb_precharge: msg.aeb_precharge,
        aeb_braking: msg.aeb_braking,
        acc_enabled: msg.acc_enabled,
        acc_braking: msg.acc_braking,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      decel: msg.decel,
      decel_src: msg.decel_src,
      fcw_enabled: msg.fcw_enabled,
      fcw_active: msg.fcw_active,
      aeb_enabled: msg.aeb_enabled,
      aeb_precharge: msg.aeb_precharge,
      aeb_braking: msg.aeb_braking,
      acc_enabled: msg.acc_enabled,
      acc_braking: msg.acc_braking,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      decel: msg.decel,
      decel_src: msg.decel_src,
      fcw_enabled: msg.fcw_enabled,
      fcw_active: msg.fcw_active,
      aeb_enabled: msg.aeb_enabled,
      aeb_precharge: msg.aeb_precharge,
      aeb_braking: msg.aeb_braking,
      acc_enabled: msg.acc_enabled,
      acc_braking: msg.acc_braking,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__FuelLevelReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FuelLevelReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FuelLevelReport::default())
  }
}

impl rosidl_runtime_rs::Message for FuelLevelReport {
  type RmwMsg = super::msg::rmw::FuelLevelReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        fuel_level: msg.fuel_level,
        battery_12v: msg.battery_12v,
        battery_hev: msg.battery_hev,
        odometer: msg.odometer,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      fuel_level: msg.fuel_level,
      battery_12v: msg.battery_12v,
      battery_hev: msg.battery_hev,
      odometer: msg.odometer,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      fuel_level: msg.fuel_level,
      battery_12v: msg.battery_12v,
      battery_hev: msg.battery_hev,
      odometer: msg.odometer,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__GearCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Gear command enumeration
    pub cmd: super::msg::Gear,

    /// Clear driver overrides
    pub clear: bool,

}



impl Default for GearCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GearCmd::default())
  }
}

impl rosidl_runtime_rs::Message for GearCmd {
  type RmwMsg = super::msg::rmw::GearCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cmd: super::msg::Gear::into_rmw_message(std::borrow::Cow::Owned(msg.cmd)).into_owned(),
        clear: msg.clear,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cmd: super::msg::Gear::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cmd)).into_owned(),
      clear: msg.clear,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cmd: super::msg::Gear::from_rmw_message(msg.cmd),
      clear: msg.clear,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__Gear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Gear::default())
  }
}

impl rosidl_runtime_rs::Message for Gear {
  type RmwMsg = super::msg::rmw::Gear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gear: msg.gear,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      gear: msg.gear,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gear: msg.gear,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__GearNum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GearNum::default())
  }
}

impl rosidl_runtime_rs::Message for GearNum {
  type RmwMsg = super::msg::rmw::GearNum;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        num: msg.num,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      num: msg.num,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      num: msg.num,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__GearReject

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GearReject::default())
  }
}

impl rosidl_runtime_rs::Message for GearReject {
  type RmwMsg = super::msg::rmw::GearReject;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__GearReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GearReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Current gear enumeration
    pub state: super::msg::Gear,

    /// Gear command enumeration
    pub cmd: super::msg::Gear,

    /// Gear reject enumeration
    pub reject: super::msg::GearReject,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GearReport::default())
  }
}

impl rosidl_runtime_rs::Message for GearReport {
  type RmwMsg = super::msg::rmw::GearReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        state: super::msg::Gear::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
        cmd: super::msg::Gear::into_rmw_message(std::borrow::Cow::Owned(msg.cmd)).into_owned(),
        reject: super::msg::GearReject::into_rmw_message(std::borrow::Cow::Owned(msg.reject)).into_owned(),
        ready: msg.ready,
        override_: msg.override_,
        fault_bus: msg.fault_bus,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        state: super::msg::Gear::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
        cmd: super::msg::Gear::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cmd)).into_owned(),
        reject: super::msg::GearReject::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reject)).into_owned(),
      ready: msg.ready,
      override_: msg.override_,
      fault_bus: msg.fault_bus,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      state: super::msg::Gear::from_rmw_message(msg.state),
      cmd: super::msg::Gear::from_rmw_message(msg.cmd),
      reject: super::msg::GearReject::from_rmw_message(msg.reject),
      ready: msg.ready,
      override_: msg.override_,
      fault_bus: msg.fault_bus,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__HillStartAssist

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HillStartAssist::default())
  }
}

impl rosidl_runtime_rs::Message for HillStartAssist {
  type RmwMsg = super::msg::rmw::HillStartAssist;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      mode: msg.mode,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__Ignition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ignition::default())
  }
}

impl rosidl_runtime_rs::Message for Ignition {
  type RmwMsg = super::msg::rmw::Ignition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__MiscCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MiscCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Turn signal command enumeration
    pub cmd: super::msg::TurnSignal,

    /// Parking brake command enumeration
    pub pbrk: super::msg::ParkingBrakeCmd,

}



impl Default for MiscCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MiscCmd::default())
  }
}

impl rosidl_runtime_rs::Message for MiscCmd {
  type RmwMsg = super::msg::rmw::MiscCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cmd: super::msg::TurnSignal::into_rmw_message(std::borrow::Cow::Owned(msg.cmd)).into_owned(),
        pbrk: super::msg::ParkingBrakeCmd::into_rmw_message(std::borrow::Cow::Owned(msg.pbrk)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cmd: super::msg::TurnSignal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cmd)).into_owned(),
        pbrk: super::msg::ParkingBrakeCmd::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pbrk)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cmd: super::msg::TurnSignal::from_rmw_message(msg.cmd),
      pbrk: super::msg::ParkingBrakeCmd::from_rmw_message(msg.pbrk),
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__Misc1Report

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Misc1Report {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Turn Signal enumeration
    pub turn_signal: super::msg::TurnSignal,

    /// High beams
    pub high_beam_headlights: bool,

    /// Front Windshield Wipers enumeration
    pub wiper: super::msg::Wiper,

    /// Ambient Light Sensor enumeration
    pub ambient_light: super::msg::AmbientLight,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Misc1Report::default())
  }
}

impl rosidl_runtime_rs::Message for Misc1Report {
  type RmwMsg = super::msg::rmw::Misc1Report;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        turn_signal: super::msg::TurnSignal::into_rmw_message(std::borrow::Cow::Owned(msg.turn_signal)).into_owned(),
        high_beam_headlights: msg.high_beam_headlights,
        wiper: super::msg::Wiper::into_rmw_message(std::borrow::Cow::Owned(msg.wiper)).into_owned(),
        ambient_light: super::msg::AmbientLight::into_rmw_message(std::borrow::Cow::Owned(msg.ambient_light)).into_owned(),
        outside_temperature: msg.outside_temperature,
        btn_cc_on: msg.btn_cc_on,
        btn_cc_off: msg.btn_cc_off,
        btn_cc_on_off: msg.btn_cc_on_off,
        btn_cc_res: msg.btn_cc_res,
        btn_cc_cncl: msg.btn_cc_cncl,
        btn_cc_res_cncl: msg.btn_cc_res_cncl,
        btn_cc_res_inc: msg.btn_cc_res_inc,
        btn_cc_res_dec: msg.btn_cc_res_dec,
        btn_cc_set_inc: msg.btn_cc_set_inc,
        btn_cc_set_dec: msg.btn_cc_set_dec,
        btn_cc_gap_inc: msg.btn_cc_gap_inc,
        btn_cc_gap_dec: msg.btn_cc_gap_dec,
        btn_la_on_off: msg.btn_la_on_off,
        btn_ld_ok: msg.btn_ld_ok,
        btn_ld_up: msg.btn_ld_up,
        btn_ld_down: msg.btn_ld_down,
        btn_ld_left: msg.btn_ld_left,
        btn_ld_right: msg.btn_ld_right,
        btn_rd_ok: msg.btn_rd_ok,
        btn_rd_up: msg.btn_rd_up,
        btn_rd_down: msg.btn_rd_down,
        btn_rd_left: msg.btn_rd_left,
        btn_rd_right: msg.btn_rd_right,
        btn_vol_inc: msg.btn_vol_inc,
        btn_vol_dec: msg.btn_vol_dec,
        btn_mute: msg.btn_mute,
        btn_media: msg.btn_media,
        btn_prev: msg.btn_prev,
        btn_next: msg.btn_next,
        btn_speak: msg.btn_speak,
        btn_call_start: msg.btn_call_start,
        btn_call_end: msg.btn_call_end,
        fault_bus: msg.fault_bus,
        door_driver: msg.door_driver,
        door_passenger: msg.door_passenger,
        door_rear_left: msg.door_rear_left,
        door_rear_right: msg.door_rear_right,
        door_hood: msg.door_hood,
        door_trunk: msg.door_trunk,
        passenger_detect: msg.passenger_detect,
        passenger_airbag: msg.passenger_airbag,
        buckle_driver: msg.buckle_driver,
        buckle_passenger: msg.buckle_passenger,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        turn_signal: super::msg::TurnSignal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.turn_signal)).into_owned(),
      high_beam_headlights: msg.high_beam_headlights,
        wiper: super::msg::Wiper::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wiper)).into_owned(),
        ambient_light: super::msg::AmbientLight::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ambient_light)).into_owned(),
      outside_temperature: msg.outside_temperature,
      btn_cc_on: msg.btn_cc_on,
      btn_cc_off: msg.btn_cc_off,
      btn_cc_on_off: msg.btn_cc_on_off,
      btn_cc_res: msg.btn_cc_res,
      btn_cc_cncl: msg.btn_cc_cncl,
      btn_cc_res_cncl: msg.btn_cc_res_cncl,
      btn_cc_res_inc: msg.btn_cc_res_inc,
      btn_cc_res_dec: msg.btn_cc_res_dec,
      btn_cc_set_inc: msg.btn_cc_set_inc,
      btn_cc_set_dec: msg.btn_cc_set_dec,
      btn_cc_gap_inc: msg.btn_cc_gap_inc,
      btn_cc_gap_dec: msg.btn_cc_gap_dec,
      btn_la_on_off: msg.btn_la_on_off,
      btn_ld_ok: msg.btn_ld_ok,
      btn_ld_up: msg.btn_ld_up,
      btn_ld_down: msg.btn_ld_down,
      btn_ld_left: msg.btn_ld_left,
      btn_ld_right: msg.btn_ld_right,
      btn_rd_ok: msg.btn_rd_ok,
      btn_rd_up: msg.btn_rd_up,
      btn_rd_down: msg.btn_rd_down,
      btn_rd_left: msg.btn_rd_left,
      btn_rd_right: msg.btn_rd_right,
      btn_vol_inc: msg.btn_vol_inc,
      btn_vol_dec: msg.btn_vol_dec,
      btn_mute: msg.btn_mute,
      btn_media: msg.btn_media,
      btn_prev: msg.btn_prev,
      btn_next: msg.btn_next,
      btn_speak: msg.btn_speak,
      btn_call_start: msg.btn_call_start,
      btn_call_end: msg.btn_call_end,
      fault_bus: msg.fault_bus,
      door_driver: msg.door_driver,
      door_passenger: msg.door_passenger,
      door_rear_left: msg.door_rear_left,
      door_rear_right: msg.door_rear_right,
      door_hood: msg.door_hood,
      door_trunk: msg.door_trunk,
      passenger_detect: msg.passenger_detect,
      passenger_airbag: msg.passenger_airbag,
      buckle_driver: msg.buckle_driver,
      buckle_passenger: msg.buckle_passenger,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      turn_signal: super::msg::TurnSignal::from_rmw_message(msg.turn_signal),
      high_beam_headlights: msg.high_beam_headlights,
      wiper: super::msg::Wiper::from_rmw_message(msg.wiper),
      ambient_light: super::msg::AmbientLight::from_rmw_message(msg.ambient_light),
      outside_temperature: msg.outside_temperature,
      btn_cc_on: msg.btn_cc_on,
      btn_cc_off: msg.btn_cc_off,
      btn_cc_on_off: msg.btn_cc_on_off,
      btn_cc_res: msg.btn_cc_res,
      btn_cc_cncl: msg.btn_cc_cncl,
      btn_cc_res_cncl: msg.btn_cc_res_cncl,
      btn_cc_res_inc: msg.btn_cc_res_inc,
      btn_cc_res_dec: msg.btn_cc_res_dec,
      btn_cc_set_inc: msg.btn_cc_set_inc,
      btn_cc_set_dec: msg.btn_cc_set_dec,
      btn_cc_gap_inc: msg.btn_cc_gap_inc,
      btn_cc_gap_dec: msg.btn_cc_gap_dec,
      btn_la_on_off: msg.btn_la_on_off,
      btn_ld_ok: msg.btn_ld_ok,
      btn_ld_up: msg.btn_ld_up,
      btn_ld_down: msg.btn_ld_down,
      btn_ld_left: msg.btn_ld_left,
      btn_ld_right: msg.btn_ld_right,
      btn_rd_ok: msg.btn_rd_ok,
      btn_rd_up: msg.btn_rd_up,
      btn_rd_down: msg.btn_rd_down,
      btn_rd_left: msg.btn_rd_left,
      btn_rd_right: msg.btn_rd_right,
      btn_vol_inc: msg.btn_vol_inc,
      btn_vol_dec: msg.btn_vol_dec,
      btn_mute: msg.btn_mute,
      btn_media: msg.btn_media,
      btn_prev: msg.btn_prev,
      btn_next: msg.btn_next,
      btn_speak: msg.btn_speak,
      btn_call_start: msg.btn_call_start,
      btn_call_end: msg.btn_call_end,
      fault_bus: msg.fault_bus,
      door_driver: msg.door_driver,
      door_passenger: msg.door_passenger,
      door_rear_left: msg.door_rear_left,
      door_rear_right: msg.door_rear_right,
      door_hood: msg.door_hood,
      door_trunk: msg.door_trunk,
      passenger_detect: msg.passenger_detect,
      passenger_airbag: msg.passenger_airbag,
      buckle_driver: msg.buckle_driver,
      buckle_passenger: msg.buckle_passenger,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__OnePedal

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OnePedal::default())
  }
}

impl rosidl_runtime_rs::Message for OnePedal {
  type RmwMsg = super::msg::rmw::OnePedal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__ParkingBrake

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParkingBrake::default())
  }
}

impl rosidl_runtime_rs::Message for ParkingBrake {
  type RmwMsg = super::msg::rmw::ParkingBrake;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__ParkingBrakeCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParkingBrakeCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ParkingBrakeCmd {
  type RmwMsg = super::msg::rmw::ParkingBrakeCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmd: msg.cmd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      cmd: msg.cmd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cmd: msg.cmd,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__QualityFactor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QualityFactor::default())
  }
}

impl rosidl_runtime_rs::Message for QualityFactor {
  type RmwMsg = super::msg::rmw::QualityFactor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__SteeringCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SteeringCmd::default())
  }
}

impl rosidl_runtime_rs::Message for SteeringCmd {
  type RmwMsg = super::msg::rmw::SteeringCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        steering_wheel_angle_cmd: msg.steering_wheel_angle_cmd,
        steering_wheel_angle_velocity: msg.steering_wheel_angle_velocity,
        steering_wheel_torque_cmd: msg.steering_wheel_torque_cmd,
        cmd_type: msg.cmd_type,
        enable: msg.enable,
        clear: msg.clear,
        ignore: msg.ignore,
        quiet: msg.quiet,
        alert: msg.alert,
        count: msg.count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      steering_wheel_angle_cmd: msg.steering_wheel_angle_cmd,
      steering_wheel_angle_velocity: msg.steering_wheel_angle_velocity,
      steering_wheel_torque_cmd: msg.steering_wheel_torque_cmd,
      cmd_type: msg.cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      quiet: msg.quiet,
      alert: msg.alert,
      count: msg.count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      steering_wheel_angle_cmd: msg.steering_wheel_angle_cmd,
      steering_wheel_angle_velocity: msg.steering_wheel_angle_velocity,
      steering_wheel_torque_cmd: msg.steering_wheel_torque_cmd,
      cmd_type: msg.cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      quiet: msg.quiet,
      alert: msg.alert,
      count: msg.count,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__SteeringReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SteeringReport::default())
  }
}

impl rosidl_runtime_rs::Message for SteeringReport {
  type RmwMsg = super::msg::rmw::SteeringReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        steering_wheel_angle: msg.steering_wheel_angle,
        steering_wheel_cmd: msg.steering_wheel_cmd,
        steering_wheel_torque: msg.steering_wheel_torque,
        steering_wheel_cmd_type: msg.steering_wheel_cmd_type,
        speed: msg.speed,
        enabled: msg.enabled,
        override_: msg.override_,
        timeout: msg.timeout,
        fault_wdc: msg.fault_wdc,
        fault_bus1: msg.fault_bus1,
        fault_bus2: msg.fault_bus2,
        fault_calibration: msg.fault_calibration,
        fault_power: msg.fault_power,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      steering_wheel_angle: msg.steering_wheel_angle,
      steering_wheel_cmd: msg.steering_wheel_cmd,
      steering_wheel_torque: msg.steering_wheel_torque,
      steering_wheel_cmd_type: msg.steering_wheel_cmd_type,
      speed: msg.speed,
      enabled: msg.enabled,
      override_: msg.override_,
      timeout: msg.timeout,
      fault_wdc: msg.fault_wdc,
      fault_bus1: msg.fault_bus1,
      fault_bus2: msg.fault_bus2,
      fault_calibration: msg.fault_calibration,
      fault_power: msg.fault_power,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      steering_wheel_angle: msg.steering_wheel_angle,
      steering_wheel_cmd: msg.steering_wheel_cmd,
      steering_wheel_torque: msg.steering_wheel_torque,
      steering_wheel_cmd_type: msg.steering_wheel_cmd_type,
      speed: msg.speed,
      enabled: msg.enabled,
      override_: msg.override_,
      timeout: msg.timeout,
      fault_wdc: msg.fault_wdc,
      fault_bus1: msg.fault_bus1,
      fault_bus2: msg.fault_bus2,
      fault_calibration: msg.fault_calibration,
      fault_power: msg.fault_power,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__SurroundReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SurroundReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SurroundReport::default())
  }
}

impl rosidl_runtime_rs::Message for SurroundReport {
  type RmwMsg = super::msg::rmw::SurroundReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cta_left_alert: msg.cta_left_alert,
        cta_right_alert: msg.cta_right_alert,
        cta_left_enabled: msg.cta_left_enabled,
        cta_right_enabled: msg.cta_right_enabled,
        blis_left_alert: msg.blis_left_alert,
        blis_right_alert: msg.blis_right_alert,
        blis_left_enabled: msg.blis_left_enabled,
        blis_right_enabled: msg.blis_right_enabled,
        sonar_enabled: msg.sonar_enabled,
        sonar_fault: msg.sonar_fault,
        sonar: msg.sonar,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cta_left_alert: msg.cta_left_alert,
      cta_right_alert: msg.cta_right_alert,
      cta_left_enabled: msg.cta_left_enabled,
      cta_right_enabled: msg.cta_right_enabled,
      blis_left_alert: msg.blis_left_alert,
      blis_right_alert: msg.blis_right_alert,
      blis_left_enabled: msg.blis_left_enabled,
      blis_right_enabled: msg.blis_right_enabled,
      sonar_enabled: msg.sonar_enabled,
      sonar_fault: msg.sonar_fault,
        sonar: msg.sonar,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cta_left_alert: msg.cta_left_alert,
      cta_right_alert: msg.cta_right_alert,
      cta_left_enabled: msg.cta_left_enabled,
      cta_right_enabled: msg.cta_right_enabled,
      blis_left_alert: msg.blis_left_alert,
      blis_right_alert: msg.blis_right_alert,
      blis_left_enabled: msg.blis_left_enabled,
      blis_right_enabled: msg.blis_right_enabled,
      sonar_enabled: msg.sonar_enabled,
      sonar_fault: msg.sonar_fault,
      sonar: msg.sonar,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__ThrottleCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ThrottleCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ThrottleCmd {
  type RmwMsg = super::msg::rmw::ThrottleCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pedal_cmd: msg.pedal_cmd,
        pedal_cmd_type: msg.pedal_cmd_type,
        enable: msg.enable,
        clear: msg.clear,
        ignore: msg.ignore,
        count: msg.count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pedal_cmd: msg.pedal_cmd,
      pedal_cmd_type: msg.pedal_cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      count: msg.count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pedal_cmd: msg.pedal_cmd,
      pedal_cmd_type: msg.pedal_cmd_type,
      enable: msg.enable,
      clear: msg.clear,
      ignore: msg.ignore,
      count: msg.count,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__ThrottleInfoReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleInfoReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Throttle Pedal
    /// Throttle pedal percent, range 0 to 1
    pub throttle_pc: f32,

    /// Throttle pedal change per second (1/s)
    pub throttle_rate: f32,

    /// Non-zero is limp-home
    pub throttle_pedal_qf: super::msg::QualityFactor,

    /// One-pedal-drive mode
    pub one_pedal: super::msg::OnePedal,

    /// Engine
    /// Engine Speed (rpm)
    pub engine_rpm: f32,

    /// Gear Num
    /// Gear Number
    pub gear_num: super::msg::GearNum,

    /// Ignition status
    /// Ignition status (enum)
    pub ignition: super::msg::Ignition,

    /// Battery Current
    /// Battery Current (Amps)
    pub batt_curr: f32,

}



impl Default for ThrottleInfoReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ThrottleInfoReport::default())
  }
}

impl rosidl_runtime_rs::Message for ThrottleInfoReport {
  type RmwMsg = super::msg::rmw::ThrottleInfoReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        throttle_pc: msg.throttle_pc,
        throttle_rate: msg.throttle_rate,
        throttle_pedal_qf: super::msg::QualityFactor::into_rmw_message(std::borrow::Cow::Owned(msg.throttle_pedal_qf)).into_owned(),
        one_pedal: super::msg::OnePedal::into_rmw_message(std::borrow::Cow::Owned(msg.one_pedal)).into_owned(),
        engine_rpm: msg.engine_rpm,
        gear_num: super::msg::GearNum::into_rmw_message(std::borrow::Cow::Owned(msg.gear_num)).into_owned(),
        ignition: super::msg::Ignition::into_rmw_message(std::borrow::Cow::Owned(msg.ignition)).into_owned(),
        batt_curr: msg.batt_curr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      throttle_pc: msg.throttle_pc,
      throttle_rate: msg.throttle_rate,
        throttle_pedal_qf: super::msg::QualityFactor::into_rmw_message(std::borrow::Cow::Borrowed(&msg.throttle_pedal_qf)).into_owned(),
        one_pedal: super::msg::OnePedal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.one_pedal)).into_owned(),
      engine_rpm: msg.engine_rpm,
        gear_num: super::msg::GearNum::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gear_num)).into_owned(),
        ignition: super::msg::Ignition::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ignition)).into_owned(),
      batt_curr: msg.batt_curr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      throttle_pc: msg.throttle_pc,
      throttle_rate: msg.throttle_rate,
      throttle_pedal_qf: super::msg::QualityFactor::from_rmw_message(msg.throttle_pedal_qf),
      one_pedal: super::msg::OnePedal::from_rmw_message(msg.one_pedal),
      engine_rpm: msg.engine_rpm,
      gear_num: super::msg::GearNum::from_rmw_message(msg.gear_num),
      ignition: super::msg::Ignition::from_rmw_message(msg.ignition),
      batt_curr: msg.batt_curr,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__ThrottleReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThrottleReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub watchdog_counter: super::msg::WatchdogCounter,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ThrottleReport::default())
  }
}

impl rosidl_runtime_rs::Message for ThrottleReport {
  type RmwMsg = super::msg::rmw::ThrottleReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pedal_input: msg.pedal_input,
        pedal_cmd: msg.pedal_cmd,
        pedal_output: msg.pedal_output,
        enabled: msg.enabled,
        override_: msg.override_,
        driver: msg.driver,
        timeout: msg.timeout,
        watchdog_counter: super::msg::WatchdogCounter::into_rmw_message(std::borrow::Cow::Owned(msg.watchdog_counter)).into_owned(),
        fault_wdc: msg.fault_wdc,
        fault_ch1: msg.fault_ch1,
        fault_ch2: msg.fault_ch2,
        fault_power: msg.fault_power,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pedal_input: msg.pedal_input,
      pedal_cmd: msg.pedal_cmd,
      pedal_output: msg.pedal_output,
      enabled: msg.enabled,
      override_: msg.override_,
      driver: msg.driver,
      timeout: msg.timeout,
        watchdog_counter: super::msg::WatchdogCounter::into_rmw_message(std::borrow::Cow::Borrowed(&msg.watchdog_counter)).into_owned(),
      fault_wdc: msg.fault_wdc,
      fault_ch1: msg.fault_ch1,
      fault_ch2: msg.fault_ch2,
      fault_power: msg.fault_power,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pedal_input: msg.pedal_input,
      pedal_cmd: msg.pedal_cmd,
      pedal_output: msg.pedal_output,
      enabled: msg.enabled,
      override_: msg.override_,
      driver: msg.driver,
      timeout: msg.timeout,
      watchdog_counter: super::msg::WatchdogCounter::from_rmw_message(msg.watchdog_counter),
      fault_wdc: msg.fault_wdc,
      fault_ch1: msg.fault_ch1,
      fault_ch2: msg.fault_ch2,
      fault_power: msg.fault_power,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__TirePressureReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TirePressureReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TirePressureReport::default())
  }
}

impl rosidl_runtime_rs::Message for TirePressureReport {
  type RmwMsg = super::msg::rmw::TirePressureReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        front_left: msg.front_left,
        front_right: msg.front_right,
        rear_left: msg.rear_left,
        rear_right: msg.rear_right,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__TurnSignal

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TurnSignal::default())
  }
}

impl rosidl_runtime_rs::Message for TurnSignal {
  type RmwMsg = super::msg::rmw::TurnSignal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__TwistCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,

    /// m/s^2, zero = no limit
    pub accel_limit: f32,

    /// m/s^2, zero = no limit
    pub decel_limit: f32,

}



impl Default for TwistCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TwistCmd::default())
  }
}

impl rosidl_runtime_rs::Message for TwistCmd {
  type RmwMsg = super::msg::rmw::TwistCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        accel_limit: msg.accel_limit,
        decel_limit: msg.decel_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      accel_limit: msg.accel_limit,
      decel_limit: msg.decel_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      accel_limit: msg.accel_limit,
      decel_limit: msg.decel_limit,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__WatchdogCounter

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WatchdogCounter::default())
  }
}

impl rosidl_runtime_rs::Message for WatchdogCounter {
  type RmwMsg = super::msg::rmw::WatchdogCounter;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source: msg.source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      source: msg.source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      source: msg.source,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__WheelPositionReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelPositionReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelPositionReport::default())
  }
}

impl rosidl_runtime_rs::Message for WheelPositionReport {
  type RmwMsg = super::msg::rmw::WheelPositionReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        front_left: msg.front_left,
        front_right: msg.front_right,
        rear_left: msg.rear_left,
        rear_right: msg.rear_right,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__WheelSpeedReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelSpeedReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelSpeedReport::default())
  }
}

impl rosidl_runtime_rs::Message for WheelSpeedReport {
  type RmwMsg = super::msg::rmw::WheelSpeedReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        front_left: msg.front_left,
        front_right: msg.front_right,
        rear_left: msg.rear_left,
        rear_right: msg.rear_right,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
    }
  }
}


// Corresponds to dbw_ford_msgs__msg__Wiper

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Wiper::default())
  }
}

impl rosidl_runtime_rs::Message for Wiper {
  type RmwMsg = super::msg::rmw::Wiper;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
    }
  }
}


