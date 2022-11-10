/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingcommission_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingcommission_ResponseCompound_allOf::OAIEzmaxinvoicingcommission_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingcommission_ResponseCompound_allOf::OAIEzmaxinvoicingcommission_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzmaxinvoicingcommission_ResponseCompound_allOf::~OAIEzmaxinvoicingcommission_ResponseCompound_allOf() {}

void OAIEzmaxinvoicingcommission_ResponseCompound_allOf::initializeModel() {

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;
}

void OAIEzmaxinvoicingcommission_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingcommission_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_contact_name_isValid = ::OpenAPI::fromJsonValue(obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;
}

QString OAIEzmaxinvoicingcommission_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingcommission_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::OpenAPI::toJsonValue(obj_contact_name));
    }
    return obj;
}

OAICustom_ContactName_Response OAIEzmaxinvoicingcommission_ResponseCompound_allOf::getObjContactName() const {
    return obj_contact_name;
}
void OAIEzmaxinvoicingcommission_ResponseCompound_allOf::setObjContactName(const OAICustom_ContactName_Response &obj_contact_name) {
    this->obj_contact_name = obj_contact_name;
    this->m_obj_contact_name_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound_allOf::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound_allOf::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
