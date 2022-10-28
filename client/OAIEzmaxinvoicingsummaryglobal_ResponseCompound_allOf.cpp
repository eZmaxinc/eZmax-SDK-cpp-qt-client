/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::~OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf() {}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::initializeModel() {

    m_a_obj_ezmaxinvoicingcommission_isSet = false;
    m_a_obj_ezmaxinvoicingcommission_isValid = false;
}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezmaxinvoicingcommission_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingcommission, json[QString("a_objEzmaxinvoicingcommission")]);
    m_a_obj_ezmaxinvoicingcommission_isSet = !json[QString("a_objEzmaxinvoicingcommission")].isNull() && m_a_obj_ezmaxinvoicingcommission_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezmaxinvoicingcommission.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingcommission"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingcommission));
    }
    return obj;
}

QList<OAIEzmaxinvoicingcommission_ResponseCompound> OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::getAObjEzmaxinvoicingcommission() const {
    return a_obj_ezmaxinvoicingcommission;
}
void OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::setAObjEzmaxinvoicingcommission(const QList<OAIEzmaxinvoicingcommission_ResponseCompound> &a_obj_ezmaxinvoicingcommission) {
    this->a_obj_ezmaxinvoicingcommission = a_obj_ezmaxinvoicingcommission;
    this->m_a_obj_ezmaxinvoicingcommission_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingcommission_Set() const{
    return m_a_obj_ezmaxinvoicingcommission_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingcommission_Valid() const{
    return m_a_obj_ezmaxinvoicingcommission_isValid;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezmaxinvoicingcommission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryglobal_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
