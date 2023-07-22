/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::~OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf() {}

void OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::initializeModel() {

    m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet = false;
    m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid = false;
}

void OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingsummaryinternaldetail, json[QString("a_objEzmaxinvoicingsummaryinternaldetail")]);
    m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet = !json[QString("a_objEzmaxinvoicingsummaryinternaldetail")].isNull() && m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid;
}

QString OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezmaxinvoicingsummaryinternaldetail.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryinternaldetail"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingsummaryinternaldetail));
    }
    return obj;
}

QList<OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound> OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::getAObjEzmaxinvoicingsummaryinternaldetail() const {
    return a_obj_ezmaxinvoicingsummaryinternaldetail;
}
void OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::setAObjEzmaxinvoicingsummaryinternaldetail(const QList<OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternaldetail) {
    this->a_obj_ezmaxinvoicingsummaryinternaldetail = a_obj_ezmaxinvoicingsummaryinternaldetail;
    this->m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingsummaryinternaldetail_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::is_a_obj_ezmaxinvoicingsummaryinternaldetail_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid;
}

bool OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezmaxinvoicingsummaryinternaldetail.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid && true;
}

} // namespace OpenAPI
