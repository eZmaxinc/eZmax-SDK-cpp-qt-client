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

#include "OAIMultilingual_PaymenttermDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_PaymenttermDescription::OAIMultilingual_PaymenttermDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_PaymenttermDescription::OAIMultilingual_PaymenttermDescription() {
    this->initializeModel();
}

OAIMultilingual_PaymenttermDescription::~OAIMultilingual_PaymenttermDescription() {}

void OAIMultilingual_PaymenttermDescription::initializeModel() {

    m_s_paymentterm_description1_isSet = false;
    m_s_paymentterm_description1_isValid = false;

    m_s_paymentterm_description2_isSet = false;
    m_s_paymentterm_description2_isValid = false;
}

void OAIMultilingual_PaymenttermDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_PaymenttermDescription::fromJsonObject(QJsonObject json) {

    m_s_paymentterm_description1_isValid = ::OpenAPI::fromJsonValue(s_paymentterm_description1, json[QString("sPaymenttermDescription1")]);
    m_s_paymentterm_description1_isSet = !json[QString("sPaymenttermDescription1")].isNull() && m_s_paymentterm_description1_isValid;

    m_s_paymentterm_description2_isValid = ::OpenAPI::fromJsonValue(s_paymentterm_description2, json[QString("sPaymenttermDescription2")]);
    m_s_paymentterm_description2_isSet = !json[QString("sPaymenttermDescription2")].isNull() && m_s_paymentterm_description2_isValid;
}

QString OAIMultilingual_PaymenttermDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_PaymenttermDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_paymentterm_description1_isSet) {
        obj.insert(QString("sPaymenttermDescription1"), ::OpenAPI::toJsonValue(s_paymentterm_description1));
    }
    if (m_s_paymentterm_description2_isSet) {
        obj.insert(QString("sPaymenttermDescription2"), ::OpenAPI::toJsonValue(s_paymentterm_description2));
    }
    return obj;
}

QString OAIMultilingual_PaymenttermDescription::getSPaymenttermDescription1() const {
    return s_paymentterm_description1;
}
void OAIMultilingual_PaymenttermDescription::setSPaymenttermDescription1(const QString &s_paymentterm_description1) {
    this->s_paymentterm_description1 = s_paymentterm_description1;
    this->m_s_paymentterm_description1_isSet = true;
}

bool OAIMultilingual_PaymenttermDescription::is_s_paymentterm_description1_Set() const{
    return m_s_paymentterm_description1_isSet;
}

bool OAIMultilingual_PaymenttermDescription::is_s_paymentterm_description1_Valid() const{
    return m_s_paymentterm_description1_isValid;
}

QString OAIMultilingual_PaymenttermDescription::getSPaymenttermDescription2() const {
    return s_paymentterm_description2;
}
void OAIMultilingual_PaymenttermDescription::setSPaymenttermDescription2(const QString &s_paymentterm_description2) {
    this->s_paymentterm_description2 = s_paymentterm_description2;
    this->m_s_paymentterm_description2_isSet = true;
}

bool OAIMultilingual_PaymenttermDescription::is_s_paymentterm_description2_Set() const{
    return m_s_paymentterm_description2_isSet;
}

bool OAIMultilingual_PaymenttermDescription::is_s_paymentterm_description2_Valid() const{
    return m_s_paymentterm_description2_isValid;
}

bool OAIMultilingual_PaymenttermDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_paymentterm_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentterm_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_PaymenttermDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI