/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::~OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf() {}

void OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::initializeModel() {

    m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet = false;
    m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid = false;
}

void OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingsummaryexternaldetail, json[QString("a_objEzmaxinvoicingsummaryexternaldetail")]);
    m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet = !json[QString("a_objEzmaxinvoicingsummaryexternaldetail")].isNull() && m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid;
}

QString OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezmaxinvoicingsummaryexternaldetail.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryexternaldetail"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingsummaryexternaldetail));
    }
    return obj;
}

QList<OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound> OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::getAObjEzmaxinvoicingsummaryexternaldetail() const {
    return a_obj_ezmaxinvoicingsummaryexternaldetail;
}
void OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::setAObjEzmaxinvoicingsummaryexternaldetail(const QList<OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternaldetail) {
    this->a_obj_ezmaxinvoicingsummaryexternaldetail = a_obj_ezmaxinvoicingsummaryexternaldetail;
    this->m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingsummaryexternaldetail_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingsummaryexternaldetail_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid;
}

bool OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezmaxinvoicingsummaryexternaldetail.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid && true;
}

} // namespace OpenAPI