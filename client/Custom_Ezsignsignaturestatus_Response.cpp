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

#include "Custom_Ezsignsignaturestatus_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_Ezsignsignaturestatus_Response::Custom_Ezsignsignaturestatus_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_Ezsignsignaturestatus_Response::Custom_Ezsignsignaturestatus_Response() {
    this->initializeModel();
}

Custom_Ezsignsignaturestatus_Response::~Custom_Ezsignsignaturestatus_Response() {}

void Custom_Ezsignsignaturestatus_Response::initializeModel() {

    m_e_ezsignsignaturestatus_steptype_isSet = false;
    m_e_ezsignsignaturestatus_steptype_isValid = false;

    m_i_ezsignsignaturestatus_step_isSet = false;
    m_i_ezsignsignaturestatus_step_isValid = false;

    m_i_ezsignsignaturestatus_total_isSet = false;
    m_i_ezsignsignaturestatus_total_isValid = false;

    m_i_ezsignsignaturestatus_signed_isSet = false;
    m_i_ezsignsignaturestatus_signed_isValid = false;
}

void Custom_Ezsignsignaturestatus_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_Ezsignsignaturestatus_Response::fromJsonObject(QJsonObject json) {

    m_e_ezsignsignaturestatus_steptype_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignaturestatus_steptype, json[QString("eEzsignsignaturestatusSteptype")]);
    m_e_ezsignsignaturestatus_steptype_isSet = !json[QString("eEzsignsignaturestatusSteptype")].isNull() && m_e_ezsignsignaturestatus_steptype_isValid;

    m_i_ezsignsignaturestatus_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignaturestatus_step, json[QString("iEzsignsignaturestatusStep")]);
    m_i_ezsignsignaturestatus_step_isSet = !json[QString("iEzsignsignaturestatusStep")].isNull() && m_i_ezsignsignaturestatus_step_isValid;

    m_i_ezsignsignaturestatus_total_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignaturestatus_total, json[QString("iEzsignsignaturestatusTotal")]);
    m_i_ezsignsignaturestatus_total_isSet = !json[QString("iEzsignsignaturestatusTotal")].isNull() && m_i_ezsignsignaturestatus_total_isValid;

    m_i_ezsignsignaturestatus_signed_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignaturestatus_signed, json[QString("iEzsignsignaturestatusSigned")]);
    m_i_ezsignsignaturestatus_signed_isSet = !json[QString("iEzsignsignaturestatusSigned")].isNull() && m_i_ezsignsignaturestatus_signed_isValid;
}

QString Custom_Ezsignsignaturestatus_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_Ezsignsignaturestatus_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_e_ezsignsignaturestatus_steptype_isSet) {
        obj.insert(QString("eEzsignsignaturestatusSteptype"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignaturestatus_steptype));
    }
    if (m_i_ezsignsignaturestatus_step_isSet) {
        obj.insert(QString("iEzsignsignaturestatusStep"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignaturestatus_step));
    }
    if (m_i_ezsignsignaturestatus_total_isSet) {
        obj.insert(QString("iEzsignsignaturestatusTotal"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignaturestatus_total));
    }
    if (m_i_ezsignsignaturestatus_signed_isSet) {
        obj.insert(QString("iEzsignsignaturestatusSigned"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignaturestatus_signed));
    }
    return obj;
}

QString Custom_Ezsignsignaturestatus_Response::getEEzsignsignaturestatusSteptype() const {
    return m_e_ezsignsignaturestatus_steptype;
}
void Custom_Ezsignsignaturestatus_Response::setEEzsignsignaturestatusSteptype(const QString &e_ezsignsignaturestatus_steptype) {
    m_e_ezsignsignaturestatus_steptype = e_ezsignsignaturestatus_steptype;
    m_e_ezsignsignaturestatus_steptype_isSet = true;
}

bool Custom_Ezsignsignaturestatus_Response::is_e_ezsignsignaturestatus_steptype_Set() const{
    return m_e_ezsignsignaturestatus_steptype_isSet;
}

bool Custom_Ezsignsignaturestatus_Response::is_e_ezsignsignaturestatus_steptype_Valid() const{
    return m_e_ezsignsignaturestatus_steptype_isValid;
}

qint32 Custom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusStep() const {
    return m_i_ezsignsignaturestatus_step;
}
void Custom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusStep(const qint32 &i_ezsignsignaturestatus_step) {
    m_i_ezsignsignaturestatus_step = i_ezsignsignaturestatus_step;
    m_i_ezsignsignaturestatus_step_isSet = true;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_step_Set() const{
    return m_i_ezsignsignaturestatus_step_isSet;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_step_Valid() const{
    return m_i_ezsignsignaturestatus_step_isValid;
}

qint32 Custom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusTotal() const {
    return m_i_ezsignsignaturestatus_total;
}
void Custom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusTotal(const qint32 &i_ezsignsignaturestatus_total) {
    m_i_ezsignsignaturestatus_total = i_ezsignsignaturestatus_total;
    m_i_ezsignsignaturestatus_total_isSet = true;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_total_Set() const{
    return m_i_ezsignsignaturestatus_total_isSet;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_total_Valid() const{
    return m_i_ezsignsignaturestatus_total_isValid;
}

qint32 Custom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusSigned() const {
    return m_i_ezsignsignaturestatus_signed;
}
void Custom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusSigned(const qint32 &i_ezsignsignaturestatus_signed) {
    m_i_ezsignsignaturestatus_signed = i_ezsignsignaturestatus_signed;
    m_i_ezsignsignaturestatus_signed_isSet = true;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_signed_Set() const{
    return m_i_ezsignsignaturestatus_signed_isSet;
}

bool Custom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_signed_Valid() const{
    return m_i_ezsignsignaturestatus_signed_isValid;
}

bool Custom_Ezsignsignaturestatus_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_ezsignsignaturestatus_steptype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_signed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_Ezsignsignaturestatus_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_ezsignsignaturestatus_steptype_isValid && m_i_ezsignsignaturestatus_step_isValid && m_i_ezsignsignaturestatus_total_isValid && m_i_ezsignsignaturestatus_signed_isValid && true;
}

} // namespace Ezmaxapi
