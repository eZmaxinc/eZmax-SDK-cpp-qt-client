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

#include "OAICustom_WordPositionOccurence_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_WordPositionOccurence_Response::OAICustom_WordPositionOccurence_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_WordPositionOccurence_Response::OAICustom_WordPositionOccurence_Response() {
    this->initializeModel();
}

OAICustom_WordPositionOccurence_Response::~OAICustom_WordPositionOccurence_Response() {}

void OAICustom_WordPositionOccurence_Response::initializeModel() {

    m_i_page_isSet = false;
    m_i_page_isValid = false;

    m_i_x_isSet = false;
    m_i_x_isValid = false;

    m_i_y_isSet = false;
    m_i_y_isValid = false;
}

void OAICustom_WordPositionOccurence_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_WordPositionOccurence_Response::fromJsonObject(QJsonObject json) {

    m_i_page_isValid = ::OpenAPI::fromJsonValue(i_page, json[QString("iPage")]);
    m_i_page_isSet = !json[QString("iPage")].isNull() && m_i_page_isValid;

    m_i_x_isValid = ::OpenAPI::fromJsonValue(i_x, json[QString("iX")]);
    m_i_x_isSet = !json[QString("iX")].isNull() && m_i_x_isValid;

    m_i_y_isValid = ::OpenAPI::fromJsonValue(i_y, json[QString("iY")]);
    m_i_y_isSet = !json[QString("iY")].isNull() && m_i_y_isValid;
}

QString OAICustom_WordPositionOccurence_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_WordPositionOccurence_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_i_page_isSet) {
        obj.insert(QString("iPage"), ::OpenAPI::toJsonValue(i_page));
    }
    if (m_i_x_isSet) {
        obj.insert(QString("iX"), ::OpenAPI::toJsonValue(i_x));
    }
    if (m_i_y_isSet) {
        obj.insert(QString("iY"), ::OpenAPI::toJsonValue(i_y));
    }
    return obj;
}

qint32 OAICustom_WordPositionOccurence_Response::getIPage() const {
    return i_page;
}
void OAICustom_WordPositionOccurence_Response::setIPage(const qint32 &i_page) {
    this->i_page = i_page;
    this->m_i_page_isSet = true;
}

bool OAICustom_WordPositionOccurence_Response::is_i_page_Set() const{
    return m_i_page_isSet;
}

bool OAICustom_WordPositionOccurence_Response::is_i_page_Valid() const{
    return m_i_page_isValid;
}

qint32 OAICustom_WordPositionOccurence_Response::getIX() const {
    return i_x;
}
void OAICustom_WordPositionOccurence_Response::setIX(const qint32 &i_x) {
    this->i_x = i_x;
    this->m_i_x_isSet = true;
}

bool OAICustom_WordPositionOccurence_Response::is_i_x_Set() const{
    return m_i_x_isSet;
}

bool OAICustom_WordPositionOccurence_Response::is_i_x_Valid() const{
    return m_i_x_isValid;
}

qint32 OAICustom_WordPositionOccurence_Response::getIY() const {
    return i_y;
}
void OAICustom_WordPositionOccurence_Response::setIY(const qint32 &i_y) {
    this->i_y = i_y;
    this->m_i_y_isSet = true;
}

bool OAICustom_WordPositionOccurence_Response::is_i_y_Set() const{
    return m_i_y_isSet;
}

bool OAICustom_WordPositionOccurence_Response::is_i_y_Valid() const{
    return m_i_y_isValid;
}

bool OAICustom_WordPositionOccurence_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_page_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_y_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_WordPositionOccurence_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
