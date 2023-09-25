/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingsummaryglobal_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzmaxinvoicingsummaryglobal_ResponseCompound::OAIEzmaxinvoicingsummaryglobal_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryglobal_ResponseCompound::OAIEzmaxinvoicingsummaryglobal_ResponseCompound() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryglobal_ResponseCompound::~OAIEzmaxinvoicingsummaryglobal_ResponseCompound() {}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::initializeModel() {

    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryglobal_id_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_s_ezmaxproduct_description_x_isSet = false;
    m_s_ezmaxproduct_description_x_isValid = false;

    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = false;
    m_dt_ezmaxinvoicingsummaryglobal_start_isValid = false;

    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = false;
    m_dt_ezmaxinvoicingsummaryglobal_end_isValid = false;

    m_i_ezmaxinvoicingsummaryglobal_days_isSet = false;
    m_i_ezmaxinvoicingsummaryglobal_days_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_countreal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_total_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_total_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_representative_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_partner_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_net_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_net_isValid = false;

    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = false;
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid = false;

    m_t_ezmaxproduct_help_x_isSet = false;
    m_t_ezmaxproduct_help_x_isValid = false;

    m_a_obj_ezmaxinvoicingcommission_isSet = false;
    m_a_obj_ezmaxinvoicingcommission_isValid = false;
}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingsummaryglobal_id, json[QString("pkiEzmaxinvoicingsummaryglobalID")]);
    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryglobalID")].isNull() && m_pki_ezmaxinvoicingsummaryglobal_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_dt_ezmaxinvoicingsummaryglobal_start_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingsummaryglobal_start, json[QString("dtEzmaxinvoicingsummaryglobalStart")]);
    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = !json[QString("dtEzmaxinvoicingsummaryglobalStart")].isNull() && m_dt_ezmaxinvoicingsummaryglobal_start_isValid;

    m_dt_ezmaxinvoicingsummaryglobal_end_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingsummaryglobal_end, json[QString("dtEzmaxinvoicingsummaryglobalEnd")]);
    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = !json[QString("dtEzmaxinvoicingsummaryglobalEnd")].isNull() && m_dt_ezmaxinvoicingsummaryglobal_end_isValid;

    m_i_ezmaxinvoicingsummaryglobal_days_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezmaxinvoicingsummaryglobal_days, json[QString("iEzmaxinvoicingsummaryglobalDays")]);
    m_i_ezmaxinvoicingsummaryglobal_days_isSet = !json[QString("iEzmaxinvoicingsummaryglobalDays")].isNull() && m_i_ezmaxinvoicingsummaryglobal_days_isValid;

    m_d_ezmaxinvoicingsummaryglobal_countreal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_countreal, json[QString("dEzmaxinvoicingsummaryglobalCountreal")]);
    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalCountreal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_countreal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_countbilled, json[QString("dEzmaxinvoicingsummaryglobalCountbilled")]);
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = !json[QString("dEzmaxinvoicingsummaryglobalCountbilled")].isNull() && m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid;

    m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_subtotal, json[QString("dEzmaxinvoicingsummaryglobalSubtotal")]);
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalSubtotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebateamount, json[QString("dEzmaxinvoicingsummaryglobalRebateamount")]);
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebateamount")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatepercent, json[QString("dEzmaxinvoicingsummaryglobalRebatepercent")]);
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebatepercent")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatetotal, json[QString("dEzmaxinvoicingsummaryglobalRebatetotal")]);
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebatetotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_total_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_total, json[QString("dEzmaxinvoicingsummaryglobalTotal")]);
    m_d_ezmaxinvoicingsummaryglobal_total_isSet = !json[QString("dEzmaxinvoicingsummaryglobalTotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_total_isValid;

    m_d_ezmaxinvoicingsummaryglobal_representative_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_representative, json[QString("dEzmaxinvoicingsummaryglobalRepresentative")]);
    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRepresentative")].isNull() && m_d_ezmaxinvoicingsummaryglobal_representative_isValid;

    m_d_ezmaxinvoicingsummaryglobal_partner_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_partner, json[QString("dEzmaxinvoicingsummaryglobalPartner")]);
    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = !json[QString("dEzmaxinvoicingsummaryglobalPartner")].isNull() && m_d_ezmaxinvoicingsummaryglobal_partner_isValid;

    m_d_ezmaxinvoicingsummaryglobal_net_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_net, json[QString("dEzmaxinvoicingsummaryglobalNet")]);
    m_d_ezmaxinvoicingsummaryglobal_net_isSet = !json[QString("dEzmaxinvoicingsummaryglobalNet")].isNull() && m_d_ezmaxinvoicingsummaryglobal_net_isValid;

    m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezmaxinvoicingsummaryglobal_adjustment, json[QString("bEzmaxinvoicingsummaryglobalAdjustment")]);
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = !json[QString("bEzmaxinvoicingsummaryglobalAdjustment")].isNull() && m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid;

    m_t_ezmaxproduct_help_x_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezmaxproduct_help_x, json[QString("tEzmaxproductHelpX")]);
    m_t_ezmaxproduct_help_x_isSet = !json[QString("tEzmaxproductHelpX")].isNull() && m_t_ezmaxproduct_help_x_isValid;

    m_a_obj_ezmaxinvoicingcommission_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingcommission, json[QString("a_objEzmaxinvoicingcommission")]);
    m_a_obj_ezmaxinvoicingcommission_isSet = !json[QString("a_objEzmaxinvoicingcommission")].isNull() && m_a_obj_ezmaxinvoicingcommission_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryglobal_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryglobal_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryglobalID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingsummaryglobal_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicing_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_s_ezmaxproduct_description_x_isSet) {
        obj.insert(QString("sEzmaxproductDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezmaxproduct_description_x));
    }
    if (m_dt_ezmaxinvoicingsummaryglobal_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingsummaryglobalStart"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingsummaryglobal_start));
    }
    if (m_dt_ezmaxinvoicingsummaryglobal_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingsummaryglobalEnd"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingsummaryglobal_end));
    }
    if (m_i_ezmaxinvoicingsummaryglobal_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingsummaryglobalDays"), ::Ezmaxapi::toJsonValue(m_i_ezmaxinvoicingsummaryglobal_days));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_countreal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalCountreal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_countreal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalCountbilled"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_countbilled));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalSubtotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_subtotal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebateamount"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebateamount));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebatepercent"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatepercent));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebatetotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatetotal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_total_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalTotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_total));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_representative_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRepresentative"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_representative));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_partner_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalPartner"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_partner));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_net_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalNet"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_net));
    }
    if (m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet) {
        obj.insert(QString("bEzmaxinvoicingsummaryglobalAdjustment"), ::Ezmaxapi::toJsonValue(m_b_ezmaxinvoicingsummaryglobal_adjustment));
    }
    if (m_t_ezmaxproduct_help_x_isSet) {
        obj.insert(QString("tEzmaxproductHelpX"), ::Ezmaxapi::toJsonValue(m_t_ezmaxproduct_help_x));
    }
    if (m_a_obj_ezmaxinvoicingcommission.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingcommission"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingcommission));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getPkiEzmaxinvoicingsummaryglobalId() const {
    return m_pki_ezmaxinvoicingsummaryglobal_id;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setPkiEzmaxinvoicingsummaryglobalId(const qint32 &pki_ezmaxinvoicingsummaryglobal_id) {
    m_pki_ezmaxinvoicingsummaryglobal_id = pki_ezmaxinvoicingsummaryglobal_id;
    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_pki_ezmaxinvoicingsummaryglobal_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryglobal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_pki_ezmaxinvoicingsummaryglobal_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryglobal_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getFkiEzmaxinvoicingId() const {
    return m_fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    m_fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getSEzmaxproductDescriptionX() const {
    return m_s_ezmaxproduct_description_x;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    m_s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    m_s_ezmaxproduct_description_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDtEzmaxinvoicingsummaryglobalStart() const {
    return m_dt_ezmaxinvoicingsummaryglobal_start;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDtEzmaxinvoicingsummaryglobalStart(const QString &dt_ezmaxinvoicingsummaryglobal_start) {
    m_dt_ezmaxinvoicingsummaryglobal_start = dt_ezmaxinvoicingsummaryglobal_start;
    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_dt_ezmaxinvoicingsummaryglobal_start_Set() const{
    return m_dt_ezmaxinvoicingsummaryglobal_start_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_dt_ezmaxinvoicingsummaryglobal_start_Valid() const{
    return m_dt_ezmaxinvoicingsummaryglobal_start_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDtEzmaxinvoicingsummaryglobalEnd() const {
    return m_dt_ezmaxinvoicingsummaryglobal_end;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDtEzmaxinvoicingsummaryglobalEnd(const QString &dt_ezmaxinvoicingsummaryglobal_end) {
    m_dt_ezmaxinvoicingsummaryglobal_end = dt_ezmaxinvoicingsummaryglobal_end;
    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_dt_ezmaxinvoicingsummaryglobal_end_Set() const{
    return m_dt_ezmaxinvoicingsummaryglobal_end_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_dt_ezmaxinvoicingsummaryglobal_end_Valid() const{
    return m_dt_ezmaxinvoicingsummaryglobal_end_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getIEzmaxinvoicingsummaryglobalDays() const {
    return m_i_ezmaxinvoicingsummaryglobal_days;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setIEzmaxinvoicingsummaryglobalDays(const qint32 &i_ezmaxinvoicingsummaryglobal_days) {
    m_i_ezmaxinvoicingsummaryglobal_days = i_ezmaxinvoicingsummaryglobal_days;
    m_i_ezmaxinvoicingsummaryglobal_days_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_i_ezmaxinvoicingsummaryglobal_days_Set() const{
    return m_i_ezmaxinvoicingsummaryglobal_days_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_i_ezmaxinvoicingsummaryglobal_days_Valid() const{
    return m_i_ezmaxinvoicingsummaryglobal_days_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalCountreal() const {
    return m_d_ezmaxinvoicingsummaryglobal_countreal;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalCountreal(const QString &d_ezmaxinvoicingsummaryglobal_countreal) {
    m_d_ezmaxinvoicingsummaryglobal_countreal = d_ezmaxinvoicingsummaryglobal_countreal;
    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_countreal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_countreal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_countreal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_countreal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalCountbilled() const {
    return m_d_ezmaxinvoicingsummaryglobal_countbilled;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalCountbilled(const QString &d_ezmaxinvoicingsummaryglobal_countbilled) {
    m_d_ezmaxinvoicingsummaryglobal_countbilled = d_ezmaxinvoicingsummaryglobal_countbilled;
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_countbilled_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_countbilled_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalSubtotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_subtotal;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalSubtotal(const QString &d_ezmaxinvoicingsummaryglobal_subtotal) {
    m_d_ezmaxinvoicingsummaryglobal_subtotal = d_ezmaxinvoicingsummaryglobal_subtotal;
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_subtotal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_subtotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalRebateamount() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalRebateamount(const QString &d_ezmaxinvoicingsummaryglobal_rebateamount) {
    m_d_ezmaxinvoicingsummaryglobal_rebateamount = d_ezmaxinvoicingsummaryglobal_rebateamount;
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebateamount_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebateamount_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalRebatepercent() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalRebatepercent(const QString &d_ezmaxinvoicingsummaryglobal_rebatepercent) {
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent = d_ezmaxinvoicingsummaryglobal_rebatepercent;
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalRebatetotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalRebatetotal(const QString &d_ezmaxinvoicingsummaryglobal_rebatetotal) {
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal = d_ezmaxinvoicingsummaryglobal_rebatetotal;
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalTotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_total;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalTotal(const QString &d_ezmaxinvoicingsummaryglobal_total) {
    m_d_ezmaxinvoicingsummaryglobal_total = d_ezmaxinvoicingsummaryglobal_total;
    m_d_ezmaxinvoicingsummaryglobal_total_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_total_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_total_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_total_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_total_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalRepresentative() const {
    return m_d_ezmaxinvoicingsummaryglobal_representative;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalRepresentative(const QString &d_ezmaxinvoicingsummaryglobal_representative) {
    m_d_ezmaxinvoicingsummaryglobal_representative = d_ezmaxinvoicingsummaryglobal_representative;
    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_representative_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_representative_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_representative_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_representative_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalPartner() const {
    return m_d_ezmaxinvoicingsummaryglobal_partner;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalPartner(const QString &d_ezmaxinvoicingsummaryglobal_partner) {
    m_d_ezmaxinvoicingsummaryglobal_partner = d_ezmaxinvoicingsummaryglobal_partner;
    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_partner_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_partner_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_partner_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_partner_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getDEzmaxinvoicingsummaryglobalNet() const {
    return m_d_ezmaxinvoicingsummaryglobal_net;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setDEzmaxinvoicingsummaryglobalNet(const QString &d_ezmaxinvoicingsummaryglobal_net) {
    m_d_ezmaxinvoicingsummaryglobal_net = d_ezmaxinvoicingsummaryglobal_net;
    m_d_ezmaxinvoicingsummaryglobal_net_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_net_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_net_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_d_ezmaxinvoicingsummaryglobal_net_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_net_isValid;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::isBEzmaxinvoicingsummaryglobalAdjustment() const {
    return m_b_ezmaxinvoicingsummaryglobal_adjustment;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setBEzmaxinvoicingsummaryglobalAdjustment(const bool &b_ezmaxinvoicingsummaryglobal_adjustment) {
    m_b_ezmaxinvoicingsummaryglobal_adjustment = b_ezmaxinvoicingsummaryglobal_adjustment;
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_b_ezmaxinvoicingsummaryglobal_adjustment_Set() const{
    return m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_b_ezmaxinvoicingsummaryglobal_adjustment_Valid() const{
    return m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getTEzmaxproductHelpX() const {
    return m_t_ezmaxproduct_help_x;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x) {
    m_t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    m_t_ezmaxproduct_help_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_t_ezmaxproduct_help_x_Set() const{
    return m_t_ezmaxproduct_help_x_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_t_ezmaxproduct_help_x_Valid() const{
    return m_t_ezmaxproduct_help_x_isValid;
}

QList<OAIEzmaxinvoicingcommission_ResponseCompound> OAIEzmaxinvoicingsummaryglobal_ResponseCompound::getAObjEzmaxinvoicingcommission() const {
    return m_a_obj_ezmaxinvoicingcommission;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound::setAObjEzmaxinvoicingcommission(const QList<OAIEzmaxinvoicingcommission_ResponseCompound> &a_obj_ezmaxinvoicingcommission) {
    m_a_obj_ezmaxinvoicingcommission = a_obj_ezmaxinvoicingcommission;
    m_a_obj_ezmaxinvoicingcommission_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_a_obj_ezmaxinvoicingcommission_Set() const{
    return m_a_obj_ezmaxinvoicingcommission_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::is_a_obj_ezmaxinvoicingcommission_Valid() const{
    return m_a_obj_ezmaxinvoicingcommission_isValid;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxproduct_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingsummaryglobal_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingsummaryglobal_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingsummaryglobal_days_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_countreal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_representative_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_partner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_net_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezmaxproduct_help_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingcommission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_dt_ezmaxinvoicingsummaryglobal_start_isValid && m_dt_ezmaxinvoicingsummaryglobal_end_isValid && m_i_ezmaxinvoicingsummaryglobal_days_isValid && m_d_ezmaxinvoicingsummaryglobal_countreal_isValid && m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid && m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid && m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid && m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid && m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid && m_d_ezmaxinvoicingsummaryglobal_total_isValid && m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid && m_t_ezmaxproduct_help_x_isValid && true;
}

} // namespace Ezmaxapi
